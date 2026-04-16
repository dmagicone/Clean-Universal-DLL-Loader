#include "ProxyCore.h"

extern bool InitDinput8Proxy();

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        ::DisableThreadLibraryCalls(hModule);
        if (!ProxyInit(hModule, "dinput8.dll", &InitDinput8Proxy))
            return FALSE;
        break;
    case DLL_PROCESS_DETACH:
        ProxyShutdown();
        break;
    }
    return TRUE;
}
