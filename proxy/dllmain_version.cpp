#include "ProxyCore.h"

extern bool InitVersionProxy();

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        ::DisableThreadLibraryCalls(hModule);
        if (!ProxyInit(hModule, "version.dll", &InitVersionProxy))
            return FALSE;
        break;
    case DLL_PROCESS_DETACH:
        ProxyShutdown();
        break;
    }
    return TRUE;
}
