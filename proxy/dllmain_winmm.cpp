#include "ProxyCore.h"

extern bool InitWinmmProxy();

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        ::DisableThreadLibraryCalls(hModule);
        if (!ProxyInit(hModule, "winmm.dll", &InitWinmmProxy))
            return FALSE;
        break;
    case DLL_PROCESS_DETACH:
        ProxyShutdown();
        break;
    }
    return TRUE;
}
