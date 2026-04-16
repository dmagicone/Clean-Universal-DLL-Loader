#include "ProxyCore.h"

HMODULE g_realDll = nullptr;

std::string GetThisDllDir(HMODULE hSelf)
{
    char buf[MAX_PATH]{};
    ::GetModuleFileNameA(hSelf, buf, MAX_PATH);
    std::string path(buf);
    size_t pos = path.find_last_of("\\/");
    return (pos != std::string::npos) ? path.substr(0, pos) : path;
}

bool LoadRealDll(const char* realName)
{
    if (g_realDll)
        return true;

    char sysDir[MAX_PATH]{};
    UINT len = ::GetSystemDirectoryA(sysDir, MAX_PATH);
    if (len == 0 || len >= MAX_PATH)
        return false;

    std::string sysPath = std::string(sysDir) + "\\" + realName;
    g_realDll = ::LoadLibraryA(sysPath.c_str());
    return g_realDll != nullptr;
}

FARPROC GetRealProc(const char* procName)
{
    if (!g_realDll)
        return nullptr;
    return ::GetProcAddress(g_realDll, procName);
}

bool ResolveExports(const char* const* exportNames, void** const* exportPtrs, size_t exportCount)
{
    if (!g_realDll)
        return false;

    bool anyResolved = false;

    for (size_t i = 0; i < exportCount; ++i)
    {
        *exportPtrs[i] = reinterpret_cast<void*>(::GetProcAddress(g_realDll, exportNames[i]));
        if (*exportPtrs[i])
            anyResolved = true;
    }

    return anyResolved;
}

void LoadProxySidecars(HMODULE hSelf)
{
    std::string dllDir  = GetThisDllDir(hSelf);
    std::string txtPath = dllDir + "\\dllload.txt";

    FILE* f = nullptr;
    fopen_s(&f, txtPath.c_str(), "r");
    if (!f)
        return;

    char line[MAX_PATH]{};
    while (fgets(line, sizeof(line), f))
    {
        size_t len = strlen(line);
        while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r' || line[len - 1] == ' ' || line[len - 1] == '\t'))
            line[--len] = 0;

        char* start = line;
        while (*start == ' ' || *start == '\t')
            ++start;

        if (*start == 0)
            continue;

        std::string dllPath = dllDir + "\\" + start;
        ::LoadLibraryA(dllPath.c_str());
    }

    fclose(f);
}

bool ProxyInit(HMODULE hSelf, const char* realDllName, bool (*resolveFn)())
{
    if (!LoadRealDll(realDllName))
        return false;

    if (resolveFn && !resolveFn())
        return false;

    LoadProxySidecars(hSelf);
    return true;
}

void ProxyShutdown()
{
    if (g_realDll)
    {
        ::FreeLibrary(g_realDll);
        g_realDll = nullptr;
    }
}
