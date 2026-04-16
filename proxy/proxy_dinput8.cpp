#include "ProxyCore.h"
#include <cstddef>

extern "C" void* ptr_DirectInput8Create = nullptr;
extern "C" void* ptr_DllCanUnloadNow = nullptr;
extern "C" void* ptr_DllGetClassObject = nullptr;
extern "C" void* ptr_DllRegisterServer = nullptr;
extern "C" void* ptr_DllUnregisterServer = nullptr;

static const char* const g_dinput8_exportNames[] = {
    "DirectInput8Create",
    "DllCanUnloadNow",
    "DllGetClassObject",
    "DllRegisterServer",
    "DllUnregisterServer"
};

static void** const g_dinput8_exportPtrs[] = {
    &ptr_DirectInput8Create,
    &ptr_DllCanUnloadNow,
    &ptr_DllGetClassObject,
    &ptr_DllRegisterServer,
    &ptr_DllUnregisterServer
};

bool InitDinput8Proxy()
{
    return ResolveExports(
        g_dinput8_exportNames,
        g_dinput8_exportPtrs,
        sizeof(g_dinput8_exportNames) / sizeof(g_dinput8_exportNames[0]));
}
