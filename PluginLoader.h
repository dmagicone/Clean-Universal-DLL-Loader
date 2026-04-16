#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>

#include "IPlugin.h"

struct PluginEntry
{
    std::string     path;
    std::string     shadowPath;
    HMODULE         module{};
    IPlugin*        instance{};
    FnDestroyPlugin fnDestroy{};
    FILETIME        lastWriteTime{};
    bool            loaded{false};
};

class PluginLoader
{
public:
    explicit PluginLoader(const std::string& pluginDir,
                          const std::string& shadowDir = "shadow_plugins",
                          bool               hotReload  = true,
                          const std::string& skipSelf   = {});
    ~PluginLoader();

    PluginLoader(const PluginLoader&)            = delete;
    PluginLoader& operator=(const PluginLoader&) = delete;

    void AddSearchDir(const std::string& dir);
    void LoadAll();
    bool Load(const std::string& dllPath);
    void Unload(const std::string& dllPath);
    void UnloadAll();
    bool Reload(const std::string& dllPath);
    void Update(float dt);

    std::size_t              PluginCount() const;
    const PluginEntry*       GetEntry(const std::string& dllPath) const;
    std::vector<std::string> ListPaths() const;

    using Callback = std::function<void(const PluginEntry&)>;
    void SetOnLoaded  (Callback cb) { m_onLoaded   = std::move(cb); }
    void SetOnUnloaded(Callback cb) { m_onUnloaded = std::move(cb); }
    void SetOnReloaded(Callback cb) { m_onReloaded = std::move(cb); }

private:
    bool        LoadEntry(PluginEntry& entry);
    void        UnloadEntry(PluginEntry& entry);
    bool        MakeShadowCopy(PluginEntry& entry);
    FILETIME    GetFileWriteTime(const std::string& path) const;
    bool        FileTimeChanged(const PluginEntry& entry) const;
    void        PollHotReload();
    std::string ShadowPathFor(const std::string& dllPath) const;

    std::string  m_pluginDir;
    std::string  m_shadowDir;
    bool         m_hotReload;
    std::string  m_skipSelf;

    std::vector<std::string>                     m_searchDirs;
    std::unordered_map<std::string, PluginEntry> m_plugins;

    Callback m_onLoaded;
    Callback m_onUnloaded;
    Callback m_onReloaded;

    float m_pollInterval{1.0f};
    float m_pollAccum{0.0f};
};
