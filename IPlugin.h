#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#define PLUGIN_API_VERSION 1
#define PLUGIN_EXPORT extern "C" __declspec(dllexport)

struct IPlugin
{
    virtual ~IPlugin() = default;
    virtual bool        OnLoad()               = 0;
    virtual void        OnUpdate(float dt)     = 0;
    virtual void        OnUnload()             = 0;
    virtual const char* GetName()    const     = 0;
    virtual const char* GetVersion() const     = 0;
};

using FnCreatePlugin        = IPlugin* (*)();
using FnDestroyPlugin       = void     (*)(IPlugin*);
using FnGetPluginAPIVersion = int      (*)();
