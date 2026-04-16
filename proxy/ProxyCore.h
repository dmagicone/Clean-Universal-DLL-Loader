#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>
#include <cstring>

extern HMODULE g_realDll;

std::string GetThisDllDir(HMODULE hSelf);
bool LoadRealDll(const char* realName);
FARPROC GetRealProc(const char* procName);
bool ResolveExports(const char* const* exportNames, void** const* exportPtrs, size_t exportCount);
void LoadProxySidecars(HMODULE hSelf);
bool ProxyInit(HMODULE hSelf, const char* realDllName, bool (*resolveFn)());
void ProxyShutdown();
