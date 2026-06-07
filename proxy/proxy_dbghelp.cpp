#include "ProxyCore.h"

extern "C" void* ptr_DbgHelpCreateUserDump                       = nullptr;
extern "C" void* ptr_DbgHelpCreateUserDumpW                      = nullptr;
extern "C" void* ptr_EnumDirTree                                 = nullptr;
extern "C" void* ptr_EnumDirTreeW                                = nullptr;
extern "C" void* ptr_EnumerateLoadedModules                      = nullptr;
extern "C" void* ptr_EnumerateLoadedModules64                    = nullptr;
extern "C" void* ptr_EnumerateLoadedModulesEx                    = nullptr;
extern "C" void* ptr_EnumerateLoadedModulesExW                   = nullptr;
extern "C" void* ptr_EnumerateLoadedModulesW64                   = nullptr;
extern "C" void* ptr_ExtensionApiVersion                         = nullptr;
extern "C" void* ptr_FindDebugInfoFile                           = nullptr;
extern "C" void* ptr_FindDebugInfoFileEx                         = nullptr;
extern "C" void* ptr_FindDebugInfoFileExW                        = nullptr;
extern "C" void* ptr_FindExecutableImage                         = nullptr;
extern "C" void* ptr_FindExecutableImageEx                       = nullptr;
extern "C" void* ptr_FindExecutableImageExW                      = nullptr;
extern "C" void* ptr_FindFileInPath                              = nullptr;
extern "C" void* ptr_FindFileInSearchPath                        = nullptr;
extern "C" void* ptr_GetTimestampForLoadedLibrary                = nullptr;
extern "C" void* ptr_ImageDirectoryEntryToData                   = nullptr;
extern "C" void* ptr_ImageDirectoryEntryToDataEx                 = nullptr;
extern "C" void* ptr_ImageNtHeader                               = nullptr;
extern "C" void* ptr_ImageRvaToSection                           = nullptr;
extern "C" void* ptr_ImageRvaToVa                                = nullptr;
extern "C" void* ptr_ImagehlpApiVersion                          = nullptr;
extern "C" void* ptr_ImagehlpApiVersionEx                        = nullptr;
extern "C" void* ptr_MakeSureDirectoryPathExists                 = nullptr;
extern "C" void* ptr_MapDebugInformation                         = nullptr;
extern "C" void* ptr_MiniDumpReadDumpStream                      = nullptr;
extern "C" void* ptr_MiniDumpWriteDump                           = nullptr;
extern "C" void* ptr_SearchTreeForFile                           = nullptr;
extern "C" void* ptr_SearchTreeForFileW                          = nullptr;
extern "C" void* ptr_StackWalk                                   = nullptr;
extern "C" void* ptr_StackWalk64                                 = nullptr;
extern "C" void* ptr_StackWalkEx                                 = nullptr;
extern "C" void* ptr_SymAddSourceStream                          = nullptr;
extern "C" void* ptr_SymAddSourceStreamA                         = nullptr;
extern "C" void* ptr_SymAddSourceStreamW                         = nullptr;
extern "C" void* ptr_SymAddSymbol                                = nullptr;
extern "C" void* ptr_SymAddSymbolW                               = nullptr;
extern "C" void* ptr_SymAddrIncludeInlineTrace                   = nullptr;
extern "C" void* ptr_SymCleanup                                  = nullptr;
extern "C" void* ptr_SymCompareInlineTrace                       = nullptr;
extern "C" void* ptr_SymDeleteSymbol                             = nullptr;
extern "C" void* ptr_SymDeleteSymbolW                            = nullptr;
extern "C" void* ptr_SymEnumLines                                = nullptr;
extern "C" void* ptr_SymEnumLinesW                               = nullptr;
extern "C" void* ptr_SymEnumProcesses                            = nullptr;
extern "C" void* ptr_SymEnumSourceFileTokens                     = nullptr;
extern "C" void* ptr_SymEnumSourceFiles                          = nullptr;
extern "C" void* ptr_SymEnumSourceFilesW                         = nullptr;
extern "C" void* ptr_SymEnumSourceLines                          = nullptr;
extern "C" void* ptr_SymEnumSourceLinesW                         = nullptr;
extern "C" void* ptr_SymEnumSym                                  = nullptr;
extern "C" void* ptr_SymEnumSymbols                              = nullptr;
extern "C" void* ptr_SymEnumSymbolsForAddr                       = nullptr;
extern "C" void* ptr_SymEnumSymbolsForAddrW                      = nullptr;
extern "C" void* ptr_SymEnumSymbolsW                             = nullptr;
extern "C" void* ptr_SymEnumTypes                                = nullptr;
extern "C" void* ptr_SymEnumTypesByName                          = nullptr;
extern "C" void* ptr_SymEnumTypesByNameW                         = nullptr;
extern "C" void* ptr_SymEnumTypesW                               = nullptr;
extern "C" void* ptr_SymEnumerateModules                         = nullptr;
extern "C" void* ptr_SymEnumerateModules64                       = nullptr;
extern "C" void* ptr_SymEnumerateModulesW64                      = nullptr;
extern "C" void* ptr_SymEnumerateSymbols                         = nullptr;
extern "C" void* ptr_SymEnumerateSymbols64                       = nullptr;
extern "C" void* ptr_SymEnumerateSymbolsW                        = nullptr;
extern "C" void* ptr_SymEnumerateSymbolsW64                      = nullptr;
extern "C" void* ptr_SymFindDebugInfoFile                        = nullptr;
extern "C" void* ptr_SymFindDebugInfoFileW                       = nullptr;
extern "C" void* ptr_SymFindExecutableImage                      = nullptr;
extern "C" void* ptr_SymFindExecutableImageW                     = nullptr;
extern "C" void* ptr_SymFindFileInPath                           = nullptr;
extern "C" void* ptr_SymFindFileInPathW                          = nullptr;
extern "C" void* ptr_SymFromAddr                                 = nullptr;
extern "C" void* ptr_SymFromAddrW                                = nullptr;
extern "C" void* ptr_SymFromIndex                                = nullptr;
extern "C" void* ptr_SymFromIndexW                               = nullptr;
extern "C" void* ptr_SymFromInlineContext                        = nullptr;
extern "C" void* ptr_SymFromInlineContextW                       = nullptr;
extern "C" void* ptr_SymFromName                                 = nullptr;
extern "C" void* ptr_SymFromNameW                                = nullptr;
extern "C" void* ptr_SymFromToken                                = nullptr;
extern "C" void* ptr_SymFromTokenW                               = nullptr;
extern "C" void* ptr_SymFunctionTableAccess                      = nullptr;
extern "C" void* ptr_SymFunctionTableAccess64                    = nullptr;
extern "C" void* ptr_SymGetExtendedOption                        = nullptr;
extern "C" void* ptr_SymGetFileLineOffsets64                     = nullptr;
extern "C" void* ptr_SymGetHomeDirectory                         = nullptr;
extern "C" void* ptr_SymGetHomeDirectoryW                        = nullptr;
extern "C" void* ptr_SymGetLineFromAddr                          = nullptr;
extern "C" void* ptr_SymGetLineFromAddr64                        = nullptr;
extern "C" void* ptr_SymGetLineFromAddrW                         = nullptr;
extern "C" void* ptr_SymGetLineFromAddrW64                       = nullptr;
extern "C" void* ptr_SymGetLineFromInlineContext                 = nullptr;
extern "C" void* ptr_SymGetLineFromInlineContextW                = nullptr;
extern "C" void* ptr_SymGetLineFromName                          = nullptr;
extern "C" void* ptr_SymGetLineFromName64                        = nullptr;
extern "C" void* ptr_SymGetLineFromNameW64                       = nullptr;
extern "C" void* ptr_SymGetLineNext                              = nullptr;
extern "C" void* ptr_SymGetLineNext64                            = nullptr;
extern "C" void* ptr_SymGetLineNextW64                           = nullptr;
extern "C" void* ptr_SymGetLinePrev                              = nullptr;
extern "C" void* ptr_SymGetLinePrev64                            = nullptr;
extern "C" void* ptr_SymGetLinePrevW64                           = nullptr;
extern "C" void* ptr_SymGetModuleBase                            = nullptr;
extern "C" void* ptr_SymGetModuleBase64                          = nullptr;
extern "C" void* ptr_SymGetModuleInfo                            = nullptr;
extern "C" void* ptr_SymGetModuleInfo64                          = nullptr;
extern "C" void* ptr_SymGetModuleInfoW                           = nullptr;
extern "C" void* ptr_SymGetModuleInfoW64                         = nullptr;
extern "C" void* ptr_SymGetOmapBlockBase                         = nullptr;
extern "C" void* ptr_SymGetOptions                               = nullptr;
extern "C" void* ptr_SymGetScope                                 = nullptr;
extern "C" void* ptr_SymGetScopeW                                = nullptr;
extern "C" void* ptr_SymGetSearchPath                            = nullptr;
extern "C" void* ptr_SymGetSearchPathW                           = nullptr;
extern "C" void* ptr_SymGetSourceFile                            = nullptr;
extern "C" void* ptr_SymGetSourceFileFromToken                   = nullptr;
extern "C" void* ptr_SymGetSourceFileFromTokenW                  = nullptr;
extern "C" void* ptr_SymGetSourceFileToken                       = nullptr;
extern "C" void* ptr_SymGetSourceFileTokenW                      = nullptr;
extern "C" void* ptr_SymGetSourceFileW                           = nullptr;
extern "C" void* ptr_SymGetSourceVarFromToken                    = nullptr;
extern "C" void* ptr_SymGetSourceVarFromTokenW                   = nullptr;
extern "C" void* ptr_SymGetSymFromAddr                           = nullptr;
extern "C" void* ptr_SymGetSymFromAddr64                         = nullptr;
extern "C" void* ptr_SymGetSymFromName                           = nullptr;
extern "C" void* ptr_SymGetSymFromName64                         = nullptr;
extern "C" void* ptr_SymGetSymNext                               = nullptr;
extern "C" void* ptr_SymGetSymNext64                             = nullptr;
extern "C" void* ptr_SymGetSymPrev                               = nullptr;
extern "C" void* ptr_SymGetSymPrev64                             = nullptr;
extern "C" void* ptr_SymGetSymbolFile                            = nullptr;
extern "C" void* ptr_SymGetSymbolFileW                           = nullptr;
extern "C" void* ptr_SymGetTypeFromName                          = nullptr;
extern "C" void* ptr_SymGetTypeFromNameW                         = nullptr;
extern "C" void* ptr_SymGetTypeInfo                              = nullptr;
extern "C" void* ptr_SymGetTypeInfoEx                            = nullptr;
extern "C" void* ptr_SymGetUnwindInfo                            = nullptr;
extern "C" void* ptr_SymInitialize                               = nullptr;
extern "C" void* ptr_SymInitializeW                              = nullptr;
extern "C" void* ptr_SymLoadModule                               = nullptr;
extern "C" void* ptr_SymLoadModule64                             = nullptr;
extern "C" void* ptr_SymLoadModuleEx                             = nullptr;
extern "C" void* ptr_SymLoadModuleExW                            = nullptr;
extern "C" void* ptr_SymMatchFileName                            = nullptr;
extern "C" void* ptr_SymMatchFileNameW                           = nullptr;
extern "C" void* ptr_SymMatchString                              = nullptr;
extern "C" void* ptr_SymMatchStringA                             = nullptr;
extern "C" void* ptr_SymMatchStringW                             = nullptr;
extern "C" void* ptr_SymNext                                     = nullptr;
extern "C" void* ptr_SymNextW                                    = nullptr;
extern "C" void* ptr_SymPrev                                     = nullptr;
extern "C" void* ptr_SymPrevW                                    = nullptr;
extern "C" void* ptr_SymQueryInlineTrace                         = nullptr;
extern "C" void* ptr_SymRefreshModuleList                        = nullptr;
extern "C" void* ptr_SymRegisterCallback                         = nullptr;
extern "C" void* ptr_SymRegisterCallback64                       = nullptr;
extern "C" void* ptr_SymRegisterCallbackW64                      = nullptr;
extern "C" void* ptr_SymRegisterFunctionEntryCallback            = nullptr;
extern "C" void* ptr_SymRegisterFunctionEntryCallback64          = nullptr;
extern "C" void* ptr_SymSearch                                   = nullptr;
extern "C" void* ptr_SymSearchW                                  = nullptr;
extern "C" void* ptr_SymSetContext                               = nullptr;
extern "C" void* ptr_SymSetExtendedOption                        = nullptr;
extern "C" void* ptr_SymSetHomeDirectory                         = nullptr;
extern "C" void* ptr_SymSetHomeDirectoryW                        = nullptr;
extern "C" void* ptr_SymSetOptions                               = nullptr;
extern "C" void* ptr_SymSetParentWindow                          = nullptr;
extern "C" void* ptr_SymSetScopeFromAddr                         = nullptr;
extern "C" void* ptr_SymSetScopeFromIndex                        = nullptr;
extern "C" void* ptr_SymSetScopeFromInlineContext                = nullptr;
extern "C" void* ptr_SymSetSearchPath                            = nullptr;
extern "C" void* ptr_SymSetSearchPathW                           = nullptr;
extern "C" void* ptr_SymSetSymWithAddr64                         = nullptr;
extern "C" void* ptr_SymSrvDeltaName                             = nullptr;
extern "C" void* ptr_SymSrvDeltaNameW                            = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexInfo                      = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexInfoW                     = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexString                    = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexStringW                   = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexes                        = nullptr;
extern "C" void* ptr_SymSrvGetFileIndexesW                       = nullptr;
extern "C" void* ptr_SymSrvGetSupplement                         = nullptr;
extern "C" void* ptr_SymSrvGetSupplementW                        = nullptr;
extern "C" void* ptr_SymSrvIsStore                               = nullptr;
extern "C" void* ptr_SymSrvIsStoreW                              = nullptr;
extern "C" void* ptr_SymSrvStoreFile                             = nullptr;
extern "C" void* ptr_SymSrvStoreFileW                            = nullptr;
extern "C" void* ptr_SymSrvStoreSupplement                       = nullptr;
extern "C" void* ptr_SymSrvStoreSupplementW                      = nullptr;
extern "C" void* ptr_SymUnDName                                  = nullptr;
extern "C" void* ptr_SymUnDName64                                = nullptr;
extern "C" void* ptr_SymUnloadModule                             = nullptr;
extern "C" void* ptr_SymUnloadModule64                           = nullptr;
extern "C" void* ptr_UnDecorateSymbolName                        = nullptr;
extern "C" void* ptr_UnDecorateSymbolNameW                       = nullptr;
extern "C" void* ptr_UnmapDebugInformation                       = nullptr;
extern "C" void* ptr_WinDbgExtensionDllInit                      = nullptr;

static const char* const g_names[] = {
    "DbgHelpCreateUserDump","DbgHelpCreateUserDumpW",
    "EnumDirTree","EnumDirTreeW",
    "EnumerateLoadedModules","EnumerateLoadedModules64",
    "EnumerateLoadedModulesEx","EnumerateLoadedModulesExW","EnumerateLoadedModulesW64",
    "ExtensionApiVersion",
    "FindDebugInfoFile","FindDebugInfoFileEx","FindDebugInfoFileExW",
    "FindExecutableImage","FindExecutableImageEx","FindExecutableImageExW",
    "FindFileInPath","FindFileInSearchPath",
    "GetTimestampForLoadedLibrary",
    "ImageDirectoryEntryToData","ImageDirectoryEntryToDataEx",
    "ImageNtHeader","ImageRvaToSection","ImageRvaToVa",
    "ImagehlpApiVersion","ImagehlpApiVersionEx",
    "MakeSureDirectoryPathExists","MapDebugInformation",
    "MiniDumpReadDumpStream","MiniDumpWriteDump",
    "SearchTreeForFile","SearchTreeForFileW",
    "StackWalk","StackWalk64","StackWalkEx",
    "SymAddSourceStream","SymAddSourceStreamA","SymAddSourceStreamW",
    "SymAddSymbol","SymAddSymbolW","SymAddrIncludeInlineTrace",
    "SymCleanup","SymCompareInlineTrace",
    "SymDeleteSymbol","SymDeleteSymbolW",
    "SymEnumLines","SymEnumLinesW","SymEnumProcesses",
    "SymEnumSourceFileTokens","SymEnumSourceFiles","SymEnumSourceFilesW",
    "SymEnumSourceLines","SymEnumSourceLinesW",
    "SymEnumSym","SymEnumSymbols","SymEnumSymbolsForAddr","SymEnumSymbolsForAddrW","SymEnumSymbolsW",
    "SymEnumTypes","SymEnumTypesByName","SymEnumTypesByNameW","SymEnumTypesW",
    "SymEnumerateModules","SymEnumerateModules64","SymEnumerateModulesW64",
    "SymEnumerateSymbols","SymEnumerateSymbols64","SymEnumerateSymbolsW","SymEnumerateSymbolsW64",
    "SymFindDebugInfoFile","SymFindDebugInfoFileW",
    "SymFindExecutableImage","SymFindExecutableImageW",
    "SymFindFileInPath","SymFindFileInPathW",
    "SymFromAddr","SymFromAddrW","SymFromIndex","SymFromIndexW",
    "SymFromInlineContext","SymFromInlineContextW","SymFromName","SymFromNameW",
    "SymFromToken","SymFromTokenW",
    "SymFunctionTableAccess","SymFunctionTableAccess64",
    "SymGetExtendedOption","SymGetFileLineOffsets64",
    "SymGetHomeDirectory","SymGetHomeDirectoryW",
    "SymGetLineFromAddr","SymGetLineFromAddr64","SymGetLineFromAddrW","SymGetLineFromAddrW64",
    "SymGetLineFromInlineContext","SymGetLineFromInlineContextW",
    "SymGetLineFromName","SymGetLineFromName64","SymGetLineFromNameW64",
    "SymGetLineNext","SymGetLineNext64","SymGetLineNextW64",
    "SymGetLinePrev","SymGetLinePrev64","SymGetLinePrevW64",
    "SymGetModuleBase","SymGetModuleBase64",
    "SymGetModuleInfo","SymGetModuleInfo64","SymGetModuleInfoW","SymGetModuleInfoW64",
    "SymGetOmapBlockBase","SymGetOptions",
    "SymGetScope","SymGetScopeW","SymGetSearchPath","SymGetSearchPathW",
    "SymGetSourceFile","SymGetSourceFileFromToken","SymGetSourceFileFromTokenW",
    "SymGetSourceFileToken","SymGetSourceFileTokenW","SymGetSourceFileW",
    "SymGetSourceVarFromToken","SymGetSourceVarFromTokenW",
    "SymGetSymFromAddr","SymGetSymFromAddr64","SymGetSymFromName","SymGetSymFromName64",
    "SymGetSymNext","SymGetSymNext64","SymGetSymPrev","SymGetSymPrev64",
    "SymGetSymbolFile","SymGetSymbolFileW",
    "SymGetTypeFromName","SymGetTypeFromNameW","SymGetTypeInfo","SymGetTypeInfoEx",
    "SymGetUnwindInfo",
    "SymInitialize","SymInitializeW",
    "SymLoadModule","SymLoadModule64","SymLoadModuleEx","SymLoadModuleExW",
    "SymMatchFileName","SymMatchFileNameW","SymMatchString","SymMatchStringA","SymMatchStringW",
    "SymNext","SymNextW","SymPrev","SymPrevW",
    "SymQueryInlineTrace","SymRefreshModuleList",
    "SymRegisterCallback","SymRegisterCallback64","SymRegisterCallbackW64",
    "SymRegisterFunctionEntryCallback","SymRegisterFunctionEntryCallback64",
    "SymSearch","SymSearchW","SymSetContext","SymSetExtendedOption",
    "SymSetHomeDirectory","SymSetHomeDirectoryW","SymSetOptions","SymSetParentWindow",
    "SymSetScopeFromAddr","SymSetScopeFromIndex","SymSetScopeFromInlineContext",
    "SymSetSearchPath","SymSetSearchPathW","SymSetSymWithAddr64",
    "SymSrvDeltaName","SymSrvDeltaNameW",
    "SymSrvGetFileIndexInfo","SymSrvGetFileIndexInfoW",
    "SymSrvGetFileIndexString","SymSrvGetFileIndexStringW",
    "SymSrvGetFileIndexes","SymSrvGetFileIndexesW",
    "SymSrvGetSupplement","SymSrvGetSupplementW",
    "SymSrvIsStore","SymSrvIsStoreW",
    "SymSrvStoreFile","SymSrvStoreFileW",
    "SymSrvStoreSupplement","SymSrvStoreSupplementW",
    "SymUnDName","SymUnDName64","SymUnloadModule","SymUnloadModule64",
    "UnDecorateSymbolName","UnDecorateSymbolNameW",
    "UnmapDebugInformation","WinDbgExtensionDllInit",
};

static void** const g_ptrs[] = {
    &ptr_DbgHelpCreateUserDump,&ptr_DbgHelpCreateUserDumpW,
    &ptr_EnumDirTree,&ptr_EnumDirTreeW,
    &ptr_EnumerateLoadedModules,&ptr_EnumerateLoadedModules64,
    &ptr_EnumerateLoadedModulesEx,&ptr_EnumerateLoadedModulesExW,&ptr_EnumerateLoadedModulesW64,
    &ptr_ExtensionApiVersion,
    &ptr_FindDebugInfoFile,&ptr_FindDebugInfoFileEx,&ptr_FindDebugInfoFileExW,
    &ptr_FindExecutableImage,&ptr_FindExecutableImageEx,&ptr_FindExecutableImageExW,
    &ptr_FindFileInPath,&ptr_FindFileInSearchPath,
    &ptr_GetTimestampForLoadedLibrary,
    &ptr_ImageDirectoryEntryToData,&ptr_ImageDirectoryEntryToDataEx,
    &ptr_ImageNtHeader,&ptr_ImageRvaToSection,&ptr_ImageRvaToVa,
    &ptr_ImagehlpApiVersion,&ptr_ImagehlpApiVersionEx,
    &ptr_MakeSureDirectoryPathExists,&ptr_MapDebugInformation,
    &ptr_MiniDumpReadDumpStream,&ptr_MiniDumpWriteDump,
    &ptr_SearchTreeForFile,&ptr_SearchTreeForFileW,
    &ptr_StackWalk,&ptr_StackWalk64,&ptr_StackWalkEx,
    &ptr_SymAddSourceStream,&ptr_SymAddSourceStreamA,&ptr_SymAddSourceStreamW,
    &ptr_SymAddSymbol,&ptr_SymAddSymbolW,&ptr_SymAddrIncludeInlineTrace,
    &ptr_SymCleanup,&ptr_SymCompareInlineTrace,
    &ptr_SymDeleteSymbol,&ptr_SymDeleteSymbolW,
    &ptr_SymEnumLines,&ptr_SymEnumLinesW,&ptr_SymEnumProcesses,
    &ptr_SymEnumSourceFileTokens,&ptr_SymEnumSourceFiles,&ptr_SymEnumSourceFilesW,
    &ptr_SymEnumSourceLines,&ptr_SymEnumSourceLinesW,
    &ptr_SymEnumSym,&ptr_SymEnumSymbols,&ptr_SymEnumSymbolsForAddr,&ptr_SymEnumSymbolsForAddrW,&ptr_SymEnumSymbolsW,
    &ptr_SymEnumTypes,&ptr_SymEnumTypesByName,&ptr_SymEnumTypesByNameW,&ptr_SymEnumTypesW,
    &ptr_SymEnumerateModules,&ptr_SymEnumerateModules64,&ptr_SymEnumerateModulesW64,
    &ptr_SymEnumerateSymbols,&ptr_SymEnumerateSymbols64,&ptr_SymEnumerateSymbolsW,&ptr_SymEnumerateSymbolsW64,
    &ptr_SymFindDebugInfoFile,&ptr_SymFindDebugInfoFileW,
    &ptr_SymFindExecutableImage,&ptr_SymFindExecutableImageW,
    &ptr_SymFindFileInPath,&ptr_SymFindFileInPathW,
    &ptr_SymFromAddr,&ptr_SymFromAddrW,&ptr_SymFromIndex,&ptr_SymFromIndexW,
    &ptr_SymFromInlineContext,&ptr_SymFromInlineContextW,&ptr_SymFromName,&ptr_SymFromNameW,
    &ptr_SymFromToken,&ptr_SymFromTokenW,
    &ptr_SymFunctionTableAccess,&ptr_SymFunctionTableAccess64,
    &ptr_SymGetExtendedOption,&ptr_SymGetFileLineOffsets64,
    &ptr_SymGetHomeDirectory,&ptr_SymGetHomeDirectoryW,
    &ptr_SymGetLineFromAddr,&ptr_SymGetLineFromAddr64,&ptr_SymGetLineFromAddrW,&ptr_SymGetLineFromAddrW64,
    &ptr_SymGetLineFromInlineContext,&ptr_SymGetLineFromInlineContextW,
    &ptr_SymGetLineFromName,&ptr_SymGetLineFromName64,&ptr_SymGetLineFromNameW64,
    &ptr_SymGetLineNext,&ptr_SymGetLineNext64,&ptr_SymGetLineNextW64,
    &ptr_SymGetLinePrev,&ptr_SymGetLinePrev64,&ptr_SymGetLinePrevW64,
    &ptr_SymGetModuleBase,&ptr_SymGetModuleBase64,
    &ptr_SymGetModuleInfo,&ptr_SymGetModuleInfo64,&ptr_SymGetModuleInfoW,&ptr_SymGetModuleInfoW64,
    &ptr_SymGetOmapBlockBase,&ptr_SymGetOptions,
    &ptr_SymGetScope,&ptr_SymGetScopeW,&ptr_SymGetSearchPath,&ptr_SymGetSearchPathW,
    &ptr_SymGetSourceFile,&ptr_SymGetSourceFileFromToken,&ptr_SymGetSourceFileFromTokenW,
    &ptr_SymGetSourceFileToken,&ptr_SymGetSourceFileTokenW,&ptr_SymGetSourceFileW,
    &ptr_SymGetSourceVarFromToken,&ptr_SymGetSourceVarFromTokenW,
    &ptr_SymGetSymFromAddr,&ptr_SymGetSymFromAddr64,&ptr_SymGetSymFromName,&ptr_SymGetSymFromName64,
    &ptr_SymGetSymNext,&ptr_SymGetSymNext64,&ptr_SymGetSymPrev,&ptr_SymGetSymPrev64,
    &ptr_SymGetSymbolFile,&ptr_SymGetSymbolFileW,
    &ptr_SymGetTypeFromName,&ptr_SymGetTypeFromNameW,&ptr_SymGetTypeInfo,&ptr_SymGetTypeInfoEx,
    &ptr_SymGetUnwindInfo,
    &ptr_SymInitialize,&ptr_SymInitializeW,
    &ptr_SymLoadModule,&ptr_SymLoadModule64,&ptr_SymLoadModuleEx,&ptr_SymLoadModuleExW,
    &ptr_SymMatchFileName,&ptr_SymMatchFileNameW,&ptr_SymMatchString,&ptr_SymMatchStringA,&ptr_SymMatchStringW,
    &ptr_SymNext,&ptr_SymNextW,&ptr_SymPrev,&ptr_SymPrevW,
    &ptr_SymQueryInlineTrace,&ptr_SymRefreshModuleList,
    &ptr_SymRegisterCallback,&ptr_SymRegisterCallback64,&ptr_SymRegisterCallbackW64,
    &ptr_SymRegisterFunctionEntryCallback,&ptr_SymRegisterFunctionEntryCallback64,
    &ptr_SymSearch,&ptr_SymSearchW,&ptr_SymSetContext,&ptr_SymSetExtendedOption,
    &ptr_SymSetHomeDirectory,&ptr_SymSetHomeDirectoryW,&ptr_SymSetOptions,&ptr_SymSetParentWindow,
    &ptr_SymSetScopeFromAddr,&ptr_SymSetScopeFromIndex,&ptr_SymSetScopeFromInlineContext,
    &ptr_SymSetSearchPath,&ptr_SymSetSearchPathW,&ptr_SymSetSymWithAddr64,
    &ptr_SymSrvDeltaName,&ptr_SymSrvDeltaNameW,
    &ptr_SymSrvGetFileIndexInfo,&ptr_SymSrvGetFileIndexInfoW,
    &ptr_SymSrvGetFileIndexString,&ptr_SymSrvGetFileIndexStringW,
    &ptr_SymSrvGetFileIndexes,&ptr_SymSrvGetFileIndexesW,
    &ptr_SymSrvGetSupplement,&ptr_SymSrvGetSupplementW,
    &ptr_SymSrvIsStore,&ptr_SymSrvIsStoreW,
    &ptr_SymSrvStoreFile,&ptr_SymSrvStoreFileW,
    &ptr_SymSrvStoreSupplement,&ptr_SymSrvStoreSupplementW,
    &ptr_SymUnDName,&ptr_SymUnDName64,&ptr_SymUnloadModule,&ptr_SymUnloadModule64,
    &ptr_UnDecorateSymbolName,&ptr_UnDecorateSymbolNameW,
    &ptr_UnmapDebugInformation,&ptr_WinDbgExtensionDllInit,
};

bool InitDbghelpProxy()
{
    return ResolveExports(g_names, g_ptrs, sizeof(g_names) / sizeof(g_names[0]));
}
