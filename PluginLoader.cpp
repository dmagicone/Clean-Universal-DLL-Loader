#include "PluginLoader.h"

#include <algorithm>

namespace
{
    bool CompareFileTime(const FILETIME& a, const FILETIME& b)
    {
        return a.dwHighDateTime == b.dwHighDateTime &&
               a.dwLowDateTime  == b.dwLowDateTime;
    }

    std::string GetStem(const std::string& path)
    {
        size_t slash = path.find_last_of("\\/");
        std::string fname = (slash != std::string::npos) ? path.substr(slash + 1) : path;
        size_t dot = fname.find_last_of('.');
        return (dot != std::string::npos) ? fname.substr(0, dot) : fname;
    }

    std::string GetExt(const std::string& path)
    {
        size_t dot = path.find_last_of('.');
        return (dot != std::string::npos) ? path.substr(dot) : "";
    }
}

PluginLoader::PluginLoader(const std::string& pluginDir,
                           const std::string& shadowDir,
                           bool               hotReload,
                           const std::string& skipSelf)
    : m_pluginDir(pluginDir)
    , m_shadowDir(shadowDir)
    , m_hotReload(hotReload)
{
    m_skipSelf = skipSelf;
    std::transform(m_skipSelf.begin(), m_skipSelf.end(), m_skipSelf.begin(), ::tolower);
    m_searchDirs.push_back(pluginDir);
    if (m_hotReload)
        ::CreateDirectoryA(m_shadowDir.c_str(), nullptr);
}

PluginLoader::~PluginLoader()
{
    UnloadAll();
}

void PluginLoader::AddSearchDir(const std::string& dir)
{
    m_searchDirs.push_back(dir);
}

void PluginLoader::LoadAll()
{
    for (const auto& dir : m_searchDirs)
    {
        // Log directly to file before anything else
        {
            FILE* f = nullptr;
            fopen_s(&f, "C:\\stloader_scan.log", "a");
            if (f) { fprintf(f, "Scanning dir: %s\n", dir.c_str()); fclose(f); }
        }

        std::string pattern = dir + "\\*.dll";

        {
            FILE* f = nullptr;
            fopen_s(&f, "C:\\stloader_scan.log", "a");
            if (f) { fprintf(f, "Pattern: %s\n", pattern.c_str()); fclose(f); }
        }

        WIN32_FIND_DATAA fd{};
        HANDLE hFind = ::FindFirstFileA(pattern.c_str(), &fd);

        {
            FILE* f = nullptr;
            fopen_s(&f, "C:\\stloader_scan.log", "a");
            if (f) { fprintf(f, "FindFirstFile result: %s\n", hFind == INVALID_HANDLE_VALUE ? "INVALID" : "OK"); fclose(f); }
        }

        if (hFind == INVALID_HANDLE_VALUE)
            continue;

        do
        {
            if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                continue;

            std::string fname = fd.cFileName;

            {
                FILE* f = nullptr;
                fopen_s(&f, "C:\\stloader_scan.log", "a");
                if (f) { fprintf(f, "Found file: %s\n", fname.c_str()); fclose(f); }
            }

            Load(dir + "\\" + fname);

            {
                FILE* f = nullptr;
                fopen_s(&f, "C:\\stloader_scan.log", "a");
                if (f) { fprintf(f, "After Load: %s\n", fname.c_str()); fclose(f); }
            }

        } while (::FindNextFileA(hFind, &fd));

        ::FindClose(hFind);
    }
}

bool PluginLoader::Load(const std::string& dllPath)
{
    if (m_plugins.count(dllPath))
        return true;

    PluginEntry entry{};
    entry.path          = dllPath;
    entry.lastWriteTime = GetFileWriteTime(dllPath);

    if (!LoadEntry(entry))
        return false;

    m_plugins.emplace(dllPath, std::move(entry));

    if (m_onLoaded)
        m_onLoaded(m_plugins.at(dllPath));

    return true;
}

void PluginLoader::Unload(const std::string& dllPath)
{
    auto it = m_plugins.find(dllPath);
    if (it == m_plugins.end()) return;
    if (m_onUnloaded) m_onUnloaded(it->second);
    UnloadEntry(it->second);
    m_plugins.erase(it);
}

void PluginLoader::UnloadAll()
{
    for (auto& [path, entry] : m_plugins)
    {
        if (m_onUnloaded) m_onUnloaded(entry);
        UnloadEntry(entry);
    }
    m_plugins.clear();
}

bool PluginLoader::Reload(const std::string& dllPath)
{
    auto it = m_plugins.find(dllPath);
    if (it == m_plugins.end())
        return Load(dllPath);

    PluginEntry& entry = it->second;
    UnloadEntry(entry);
    entry.lastWriteTime = GetFileWriteTime(dllPath);

    if (!LoadEntry(entry))
    {
        m_plugins.erase(it);
        return false;
    }

    if (m_onReloaded) m_onReloaded(entry);
    return true;
}

void PluginLoader::Update(float dt)
{
    if (m_hotReload)
    {
        m_pollAccum += dt;
        if (m_pollAccum >= m_pollInterval)
        {
            m_pollAccum = 0.0f;
            PollHotReload();
        }
    }

    for (auto& [path, entry] : m_plugins)
    {
        if (entry.loaded && entry.instance)
            entry.instance->OnUpdate(dt);
    }
}

std::size_t PluginLoader::PluginCount() const { return m_plugins.size(); }

const PluginEntry* PluginLoader::GetEntry(const std::string& dllPath) const
{
    auto it = m_plugins.find(dllPath);
    return (it != m_plugins.end()) ? &it->second : nullptr;
}

std::vector<std::string> PluginLoader::ListPaths() const
{
    std::vector<std::string> out;
    out.reserve(m_plugins.size());
    for (const auto& [path, _] : m_plugins)
        out.push_back(path);
    return out;
}

bool PluginLoader::LoadEntry(PluginEntry& entry)
{
    if (m_hotReload)
    {
        if (!MakeShadowCopy(entry))
            return false;
    }
    else
    {
        entry.shadowPath = entry.path;
    }

    HMODULE mod = ::LoadLibraryA(entry.shadowPath.c_str());
    if (!mod)
        return false;

    // Optional IPlugin interface — if exports exist, use them
    auto fnVersion = reinterpret_cast<FnGetPluginAPIVersion>(
        ::GetProcAddress(mod, "GetPluginAPIVersion"));
    auto fnCreate  = reinterpret_cast<FnCreatePlugin>(
        ::GetProcAddress(mod, "CreatePlugin"));
    auto fnDestroy = reinterpret_cast<FnDestroyPlugin>(
        ::GetProcAddress(mod, "DestroyPlugin"));

    if (fnVersion && fnCreate && fnDestroy && fnVersion() == PLUGIN_API_VERSION)
    {
        IPlugin* inst = fnCreate();
        if (inst && inst->OnLoad())
        {
            entry.instance  = inst;
            entry.fnDestroy = fnDestroy;
        }
        else
        {
            if (inst) fnDestroy(inst);
        }
    }

    entry.module = mod;
    entry.loaded = true;
    return true;
}

void PluginLoader::UnloadEntry(PluginEntry& entry)
{
    if (!entry.loaded) return;

    if (entry.instance)
    {
        entry.instance->OnUnload();
        if (entry.fnDestroy) entry.fnDestroy(entry.instance);
        entry.instance = nullptr;
    }

    if (entry.module)
    {
        ::FreeLibrary(entry.module);
        entry.module = nullptr;
    }

    if (m_hotReload && !entry.shadowPath.empty() && entry.shadowPath != entry.path)
        ::DeleteFileA(entry.shadowPath.c_str());

    entry.loaded    = false;
    entry.fnDestroy = nullptr;
}

bool PluginLoader::MakeShadowCopy(PluginEntry& entry)
{
    entry.shadowPath = ShadowPathFor(entry.path);
    return ::CopyFileA(entry.path.c_str(), entry.shadowPath.c_str(), FALSE) != 0;
}

std::string PluginLoader::ShadowPathFor(const std::string& dllPath) const
{
    return m_shadowDir + "\\" + GetStem(dllPath) + "_shadow" + GetExt(dllPath);
}

FILETIME PluginLoader::GetFileWriteTime(const std::string& path) const
{
    WIN32_FILE_ATTRIBUTE_DATA info{};
    if (::GetFileAttributesExA(path.c_str(), GetFileExInfoStandard, &info))
        return info.ftLastWriteTime;
    return {};
}

bool PluginLoader::FileTimeChanged(const PluginEntry& entry) const
{
    FILETIME current = GetFileWriteTime(entry.path);
    return !CompareFileTime(current, entry.lastWriteTime);
}

void PluginLoader::PollHotReload()
{
    std::vector<std::string> changed;
    for (const auto& [path, entry] : m_plugins)
        if (FileTimeChanged(entry))
            changed.push_back(path);

    for (const auto& path : changed)
        Reload(path);
}
