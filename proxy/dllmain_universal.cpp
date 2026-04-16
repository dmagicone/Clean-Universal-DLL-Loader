
#include "ProxyCore.h"
#include <string>
#include <algorithm>
#include <cctype>

extern bool InitUniversalProxy();

static std::string GetLowerModuleName(HMODULE hModule)
{
    char path[MAX_PATH]{};
    ::GetModuleFileNameA(hModule, path, MAX_PATH);
    std::string name(path);
    size_t pos = name.find_last_of("\\/");
    if (pos != std::string::npos)
        name = name.substr(pos + 1);

    std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });

    return name;
}

static const char* PickRealDllName(HMODULE hModule)
{
    const std::string moduleName = GetLowerModuleName(hModule);

    if (moduleName == "winmm.dll")
        return "winmm.dll";
    if (moduleName == "version.dll")
        return "version.dll";
    if (moduleName == "dinput8.dll")
        return "dinput8.dll";
    if (moduleName == "dsound.dll")
        return "dsound.dll";
    if (moduleName == "dxgi.dll")
        return "dxgi.dll";

    return nullptr;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
    {
        ::DisableThreadLibraryCalls(hModule);
        const char* realDllName = PickRealDllName(hModule);
        if (!realDllName)
            return FALSE;
        if (!ProxyInit(hModule, realDllName, &InitUniversalProxy))
            return FALSE;
        break;
    }
    case DLL_PROCESS_DETACH:
        ProxyShutdown();
        break;
    }
    return TRUE;
}
