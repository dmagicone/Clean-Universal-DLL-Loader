#include "ProxyCore.h"
#include <string>
#include <algorithm>
#include <cctype>

extern bool InitUniversalProxy();
extern bool InitDbghelpProxy();

static std::string GetSelfName(HMODULE hModule)
{
    char path[MAX_PATH]{};
    ::GetModuleFileNameA(hModule, path, MAX_PATH);
    std::string name(path);
    size_t pos = name.find_last_of("\\/");
    if (pos != std::string::npos) name = name.substr(pos + 1);
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return name;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        ::DisableThreadLibraryCalls(hModule);

        std::string name = GetSelfName(hModule);

        if (name == "dbghelp.dll")
            return ProxyInit(hModule, "dbghelp.dll", &InitDbghelpProxy) ? TRUE : FALSE;

        // All other supported proxy names use the universal stub exports
        const char* realDll = nullptr;
        if      (name == "winmm.dll")   realDll = "winmm.dll";
        else if (name == "version.dll") realDll = "version.dll";
        else if (name == "dinput8.dll") realDll = "dinput8.dll";
        else if (name == "dsound.dll")  realDll = "dsound.dll";
        else if (name == "dxgi.dll")    realDll = "dxgi.dll";

        return ProxyInit(hModule, realDll, realDll ? &InitUniversalProxy : nullptr) ? TRUE : FALSE;
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        ProxyShutdown();
    }
    return TRUE;
}
