#include "ProxyCore.h"
#include <cstddef>

extern "C" void* ptr_DirectSoundCreate = nullptr;
extern "C" void* ptr_DirectSoundCreate8 = nullptr;
extern "C" void* ptr_DirectSoundCaptureCreate = nullptr;
extern "C" void* ptr_DirectSoundCaptureCreate8 = nullptr;
extern "C" void* ptr_DirectSoundFullDuplexCreate = nullptr;
extern "C" void* ptr_DirectSoundEnumerateA = nullptr;
extern "C" void* ptr_DirectSoundEnumerateW = nullptr;
extern "C" void* ptr_DirectSoundCaptureEnumerateA = nullptr;
extern "C" void* ptr_DirectSoundCaptureEnumerateW = nullptr;
extern "C" void* ptr_GetDeviceID = nullptr;
extern "C" void* ptr_DllCanUnloadNow = nullptr;
extern "C" void* ptr_DllGetClassObject = nullptr;

static const char* const g_dsound_exportNames[] = {
    "DirectSoundCreate",
    "DirectSoundCreate8",
    "DirectSoundCaptureCreate",
    "DirectSoundCaptureCreate8",
    "DirectSoundFullDuplexCreate",
    "DirectSoundEnumerateA",
    "DirectSoundEnumerateW",
    "DirectSoundCaptureEnumerateA",
    "DirectSoundCaptureEnumerateW",
    "GetDeviceID",
    "DllCanUnloadNow",
    "DllGetClassObject"
};

static void** const g_dsound_exportPtrs[] = {
    &ptr_DirectSoundCreate,
    &ptr_DirectSoundCreate8,
    &ptr_DirectSoundCaptureCreate,
    &ptr_DirectSoundCaptureCreate8,
    &ptr_DirectSoundFullDuplexCreate,
    &ptr_DirectSoundEnumerateA,
    &ptr_DirectSoundEnumerateW,
    &ptr_DirectSoundCaptureEnumerateA,
    &ptr_DirectSoundCaptureEnumerateW,
    &ptr_GetDeviceID,
    &ptr_DllCanUnloadNow,
    &ptr_DllGetClassObject
};

bool InitDsoundProxy()
{
    return ResolveExports(
        g_dsound_exportNames,
        g_dsound_exportPtrs,
        sizeof(g_dsound_exportNames) / sizeof(g_dsound_exportNames[0]));
}
