#include "ProxyCore.h"
#include <cstddef>

extern "C" void* ptr_GetFileVersionInfoA = nullptr;
extern "C" void* ptr_GetFileVersionInfoByHandle = nullptr;
extern "C" void* ptr_GetFileVersionInfoExA = nullptr;
extern "C" void* ptr_GetFileVersionInfoExW = nullptr;
extern "C" void* ptr_GetFileVersionInfoSizeA = nullptr;
extern "C" void* ptr_GetFileVersionInfoSizeExA = nullptr;
extern "C" void* ptr_GetFileVersionInfoSizeExW = nullptr;
extern "C" void* ptr_GetFileVersionInfoSizeW = nullptr;
extern "C" void* ptr_GetFileVersionInfoW = nullptr;
extern "C" void* ptr_VerFindFileA = nullptr;
extern "C" void* ptr_VerFindFileW = nullptr;
extern "C" void* ptr_VerInstallFileA = nullptr;
extern "C" void* ptr_VerInstallFileW = nullptr;
extern "C" void* ptr_VerLanguageNameA = nullptr;
extern "C" void* ptr_VerLanguageNameW = nullptr;
extern "C" void* ptr_VerQueryValueA = nullptr;
extern "C" void* ptr_VerQueryValueW = nullptr;

static const char* const g_version_exportNames[] = {
    "GetFileVersionInfoA",
    "GetFileVersionInfoByHandle",
    "GetFileVersionInfoExA",
    "GetFileVersionInfoExW",
    "GetFileVersionInfoSizeA",
    "GetFileVersionInfoSizeExA",
    "GetFileVersionInfoSizeExW",
    "GetFileVersionInfoSizeW",
    "GetFileVersionInfoW",
    "VerFindFileA",
    "VerFindFileW",
    "VerInstallFileA",
    "VerInstallFileW",
    "VerLanguageNameA",
    "VerLanguageNameW",
    "VerQueryValueA",
    "VerQueryValueW"
};

static void** const g_version_exportPtrs[] = {
    &ptr_GetFileVersionInfoA,
    &ptr_GetFileVersionInfoByHandle,
    &ptr_GetFileVersionInfoExA,
    &ptr_GetFileVersionInfoExW,
    &ptr_GetFileVersionInfoSizeA,
    &ptr_GetFileVersionInfoSizeExA,
    &ptr_GetFileVersionInfoSizeExW,
    &ptr_GetFileVersionInfoSizeW,
    &ptr_GetFileVersionInfoW,
    &ptr_VerFindFileA,
    &ptr_VerFindFileW,
    &ptr_VerInstallFileA,
    &ptr_VerInstallFileW,
    &ptr_VerLanguageNameA,
    &ptr_VerLanguageNameW,
    &ptr_VerQueryValueA,
    &ptr_VerQueryValueW
};

bool InitVersionProxy()
{
    return ResolveExports(
        g_version_exportNames,
        g_version_exportPtrs,
        sizeof(g_version_exportNames) / sizeof(g_version_exportNames[0]));
}
