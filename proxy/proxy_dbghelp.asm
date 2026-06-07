OPTION CASEMAP:NONE

EXTERN ptr_DbgHelpCreateUserDump:QWORD
EXTERN ptr_DbgHelpCreateUserDumpW:QWORD
EXTERN ptr_EnumDirTree:QWORD
EXTERN ptr_EnumDirTreeW:QWORD
EXTERN ptr_EnumerateLoadedModules:QWORD
EXTERN ptr_EnumerateLoadedModules64:QWORD
EXTERN ptr_EnumerateLoadedModulesEx:QWORD
EXTERN ptr_EnumerateLoadedModulesExW:QWORD
EXTERN ptr_EnumerateLoadedModulesW64:QWORD
EXTERN ptr_ExtensionApiVersion:QWORD
EXTERN ptr_FindDebugInfoFile:QWORD
EXTERN ptr_FindDebugInfoFileEx:QWORD
EXTERN ptr_FindDebugInfoFileExW:QWORD
EXTERN ptr_FindExecutableImage:QWORD
EXTERN ptr_FindExecutableImageEx:QWORD
EXTERN ptr_FindExecutableImageExW:QWORD
EXTERN ptr_FindFileInPath:QWORD
EXTERN ptr_FindFileInSearchPath:QWORD
EXTERN ptr_GetTimestampForLoadedLibrary:QWORD
EXTERN ptr_ImageDirectoryEntryToData:QWORD
EXTERN ptr_ImageDirectoryEntryToDataEx:QWORD
EXTERN ptr_ImageNtHeader:QWORD
EXTERN ptr_ImageRvaToSection:QWORD
EXTERN ptr_ImageRvaToVa:QWORD
EXTERN ptr_ImagehlpApiVersion:QWORD
EXTERN ptr_ImagehlpApiVersionEx:QWORD
EXTERN ptr_MakeSureDirectoryPathExists:QWORD
EXTERN ptr_MapDebugInformation:QWORD
EXTERN ptr_MiniDumpReadDumpStream:QWORD
EXTERN ptr_MiniDumpWriteDump:QWORD
EXTERN ptr_SearchTreeForFile:QWORD
EXTERN ptr_SearchTreeForFileW:QWORD
EXTERN ptr_StackWalk:QWORD
EXTERN ptr_StackWalk64:QWORD
EXTERN ptr_StackWalkEx:QWORD
EXTERN ptr_SymAddSourceStream:QWORD
EXTERN ptr_SymAddSourceStreamA:QWORD
EXTERN ptr_SymAddSourceStreamW:QWORD
EXTERN ptr_SymAddSymbol:QWORD
EXTERN ptr_SymAddSymbolW:QWORD
EXTERN ptr_SymAddrIncludeInlineTrace:QWORD
EXTERN ptr_SymCleanup:QWORD
EXTERN ptr_SymCompareInlineTrace:QWORD
EXTERN ptr_SymDeleteSymbol:QWORD
EXTERN ptr_SymDeleteSymbolW:QWORD
EXTERN ptr_SymEnumLines:QWORD
EXTERN ptr_SymEnumLinesW:QWORD
EXTERN ptr_SymEnumProcesses:QWORD
EXTERN ptr_SymEnumSourceFileTokens:QWORD
EXTERN ptr_SymEnumSourceFiles:QWORD
EXTERN ptr_SymEnumSourceFilesW:QWORD
EXTERN ptr_SymEnumSourceLines:QWORD
EXTERN ptr_SymEnumSourceLinesW:QWORD
EXTERN ptr_SymEnumSym:QWORD
EXTERN ptr_SymEnumSymbols:QWORD
EXTERN ptr_SymEnumSymbolsForAddr:QWORD
EXTERN ptr_SymEnumSymbolsForAddrW:QWORD
EXTERN ptr_SymEnumSymbolsW:QWORD
EXTERN ptr_SymEnumTypes:QWORD
EXTERN ptr_SymEnumTypesByName:QWORD
EXTERN ptr_SymEnumTypesByNameW:QWORD
EXTERN ptr_SymEnumTypesW:QWORD
EXTERN ptr_SymEnumerateModules:QWORD
EXTERN ptr_SymEnumerateModules64:QWORD
EXTERN ptr_SymEnumerateModulesW64:QWORD
EXTERN ptr_SymEnumerateSymbols:QWORD
EXTERN ptr_SymEnumerateSymbols64:QWORD
EXTERN ptr_SymEnumerateSymbolsW:QWORD
EXTERN ptr_SymEnumerateSymbolsW64:QWORD
EXTERN ptr_SymFindDebugInfoFile:QWORD
EXTERN ptr_SymFindDebugInfoFileW:QWORD
EXTERN ptr_SymFindExecutableImage:QWORD
EXTERN ptr_SymFindExecutableImageW:QWORD
EXTERN ptr_SymFindFileInPath:QWORD
EXTERN ptr_SymFindFileInPathW:QWORD
EXTERN ptr_SymFromAddr:QWORD
EXTERN ptr_SymFromAddrW:QWORD
EXTERN ptr_SymFromIndex:QWORD
EXTERN ptr_SymFromIndexW:QWORD
EXTERN ptr_SymFromInlineContext:QWORD
EXTERN ptr_SymFromInlineContextW:QWORD
EXTERN ptr_SymFromName:QWORD
EXTERN ptr_SymFromNameW:QWORD
EXTERN ptr_SymFromToken:QWORD
EXTERN ptr_SymFromTokenW:QWORD
EXTERN ptr_SymFunctionTableAccess:QWORD
EXTERN ptr_SymFunctionTableAccess64:QWORD
EXTERN ptr_SymGetExtendedOption:QWORD
EXTERN ptr_SymGetFileLineOffsets64:QWORD
EXTERN ptr_SymGetHomeDirectory:QWORD
EXTERN ptr_SymGetHomeDirectoryW:QWORD
EXTERN ptr_SymGetLineFromAddr:QWORD
EXTERN ptr_SymGetLineFromAddr64:QWORD
EXTERN ptr_SymGetLineFromAddrW:QWORD
EXTERN ptr_SymGetLineFromAddrW64:QWORD
EXTERN ptr_SymGetLineFromInlineContext:QWORD
EXTERN ptr_SymGetLineFromInlineContextW:QWORD
EXTERN ptr_SymGetLineFromName:QWORD
EXTERN ptr_SymGetLineFromName64:QWORD
EXTERN ptr_SymGetLineFromNameW64:QWORD
EXTERN ptr_SymGetLineNext:QWORD
EXTERN ptr_SymGetLineNext64:QWORD
EXTERN ptr_SymGetLineNextW64:QWORD
EXTERN ptr_SymGetLinePrev:QWORD
EXTERN ptr_SymGetLinePrev64:QWORD
EXTERN ptr_SymGetLinePrevW64:QWORD
EXTERN ptr_SymGetModuleBase:QWORD
EXTERN ptr_SymGetModuleBase64:QWORD
EXTERN ptr_SymGetModuleInfo:QWORD
EXTERN ptr_SymGetModuleInfo64:QWORD
EXTERN ptr_SymGetModuleInfoW:QWORD
EXTERN ptr_SymGetModuleInfoW64:QWORD
EXTERN ptr_SymGetOmapBlockBase:QWORD
EXTERN ptr_SymGetOptions:QWORD
EXTERN ptr_SymGetScope:QWORD
EXTERN ptr_SymGetScopeW:QWORD
EXTERN ptr_SymGetSearchPath:QWORD
EXTERN ptr_SymGetSearchPathW:QWORD
EXTERN ptr_SymGetSourceFile:QWORD
EXTERN ptr_SymGetSourceFileFromToken:QWORD
EXTERN ptr_SymGetSourceFileFromTokenW:QWORD
EXTERN ptr_SymGetSourceFileToken:QWORD
EXTERN ptr_SymGetSourceFileTokenW:QWORD
EXTERN ptr_SymGetSourceFileW:QWORD
EXTERN ptr_SymGetSourceVarFromToken:QWORD
EXTERN ptr_SymGetSourceVarFromTokenW:QWORD
EXTERN ptr_SymGetSymFromAddr:QWORD
EXTERN ptr_SymGetSymFromAddr64:QWORD
EXTERN ptr_SymGetSymFromName:QWORD
EXTERN ptr_SymGetSymFromName64:QWORD
EXTERN ptr_SymGetSymNext:QWORD
EXTERN ptr_SymGetSymNext64:QWORD
EXTERN ptr_SymGetSymPrev:QWORD
EXTERN ptr_SymGetSymPrev64:QWORD
EXTERN ptr_SymGetSymbolFile:QWORD
EXTERN ptr_SymGetSymbolFileW:QWORD
EXTERN ptr_SymGetTypeFromName:QWORD
EXTERN ptr_SymGetTypeFromNameW:QWORD
EXTERN ptr_SymGetTypeInfo:QWORD
EXTERN ptr_SymGetTypeInfoEx:QWORD
EXTERN ptr_SymGetUnwindInfo:QWORD
EXTERN ptr_SymInitialize:QWORD
EXTERN ptr_SymInitializeW:QWORD
EXTERN ptr_SymLoadModule:QWORD
EXTERN ptr_SymLoadModule64:QWORD
EXTERN ptr_SymLoadModuleEx:QWORD
EXTERN ptr_SymLoadModuleExW:QWORD
EXTERN ptr_SymMatchFileName:QWORD
EXTERN ptr_SymMatchFileNameW:QWORD
EXTERN ptr_SymMatchString:QWORD
EXTERN ptr_SymMatchStringA:QWORD
EXTERN ptr_SymMatchStringW:QWORD
EXTERN ptr_SymNext:QWORD
EXTERN ptr_SymNextW:QWORD
EXTERN ptr_SymPrev:QWORD
EXTERN ptr_SymPrevW:QWORD
EXTERN ptr_SymQueryInlineTrace:QWORD
EXTERN ptr_SymRefreshModuleList:QWORD
EXTERN ptr_SymRegisterCallback:QWORD
EXTERN ptr_SymRegisterCallback64:QWORD
EXTERN ptr_SymRegisterCallbackW64:QWORD
EXTERN ptr_SymRegisterFunctionEntryCallback:QWORD
EXTERN ptr_SymRegisterFunctionEntryCallback64:QWORD
EXTERN ptr_SymSearch:QWORD
EXTERN ptr_SymSearchW:QWORD
EXTERN ptr_SymSetContext:QWORD
EXTERN ptr_SymSetExtendedOption:QWORD
EXTERN ptr_SymSetHomeDirectory:QWORD
EXTERN ptr_SymSetHomeDirectoryW:QWORD
EXTERN ptr_SymSetOptions:QWORD
EXTERN ptr_SymSetParentWindow:QWORD
EXTERN ptr_SymSetScopeFromAddr:QWORD
EXTERN ptr_SymSetScopeFromIndex:QWORD
EXTERN ptr_SymSetScopeFromInlineContext:QWORD
EXTERN ptr_SymSetSearchPath:QWORD
EXTERN ptr_SymSetSearchPathW:QWORD
EXTERN ptr_SymSetSymWithAddr64:QWORD
EXTERN ptr_SymSrvDeltaName:QWORD
EXTERN ptr_SymSrvDeltaNameW:QWORD
EXTERN ptr_SymSrvGetFileIndexInfo:QWORD
EXTERN ptr_SymSrvGetFileIndexInfoW:QWORD
EXTERN ptr_SymSrvGetFileIndexString:QWORD
EXTERN ptr_SymSrvGetFileIndexStringW:QWORD
EXTERN ptr_SymSrvGetFileIndexes:QWORD
EXTERN ptr_SymSrvGetFileIndexesW:QWORD
EXTERN ptr_SymSrvGetSupplement:QWORD
EXTERN ptr_SymSrvGetSupplementW:QWORD
EXTERN ptr_SymSrvIsStore:QWORD
EXTERN ptr_SymSrvIsStoreW:QWORD
EXTERN ptr_SymSrvStoreFile:QWORD
EXTERN ptr_SymSrvStoreFileW:QWORD
EXTERN ptr_SymSrvStoreSupplement:QWORD
EXTERN ptr_SymSrvStoreSupplementW:QWORD
EXTERN ptr_SymUnDName:QWORD
EXTERN ptr_SymUnDName64:QWORD
EXTERN ptr_SymUnloadModule:QWORD
EXTERN ptr_SymUnloadModule64:QWORD
EXTERN ptr_UnDecorateSymbolName:QWORD
EXTERN ptr_UnDecorateSymbolNameW:QWORD
EXTERN ptr_UnmapDebugInformation:QWORD
EXTERN ptr_WinDbgExtensionDllInit:QWORD

.code
DbgHelpCreateUserDump PROC
    jmp qword ptr [ptr_DbgHelpCreateUserDump]
DbgHelpCreateUserDump ENDP
DbgHelpCreateUserDumpW PROC
    jmp qword ptr [ptr_DbgHelpCreateUserDumpW]
DbgHelpCreateUserDumpW ENDP
EnumDirTree PROC
    jmp qword ptr [ptr_EnumDirTree]
EnumDirTree ENDP
EnumDirTreeW PROC
    jmp qword ptr [ptr_EnumDirTreeW]
EnumDirTreeW ENDP
EnumerateLoadedModules PROC
    jmp qword ptr [ptr_EnumerateLoadedModules]
EnumerateLoadedModules ENDP
EnumerateLoadedModules64 PROC
    jmp qword ptr [ptr_EnumerateLoadedModules64]
EnumerateLoadedModules64 ENDP
EnumerateLoadedModulesEx PROC
    jmp qword ptr [ptr_EnumerateLoadedModulesEx]
EnumerateLoadedModulesEx ENDP
EnumerateLoadedModulesExW PROC
    jmp qword ptr [ptr_EnumerateLoadedModulesExW]
EnumerateLoadedModulesExW ENDP
EnumerateLoadedModulesW64 PROC
    jmp qword ptr [ptr_EnumerateLoadedModulesW64]
EnumerateLoadedModulesW64 ENDP
ExtensionApiVersion PROC
    jmp qword ptr [ptr_ExtensionApiVersion]
ExtensionApiVersion ENDP
FindDebugInfoFile PROC
    jmp qword ptr [ptr_FindDebugInfoFile]
FindDebugInfoFile ENDP
FindDebugInfoFileEx PROC
    jmp qword ptr [ptr_FindDebugInfoFileEx]
FindDebugInfoFileEx ENDP
FindDebugInfoFileExW PROC
    jmp qword ptr [ptr_FindDebugInfoFileExW]
FindDebugInfoFileExW ENDP
FindExecutableImage PROC
    jmp qword ptr [ptr_FindExecutableImage]
FindExecutableImage ENDP
FindExecutableImageEx PROC
    jmp qword ptr [ptr_FindExecutableImageEx]
FindExecutableImageEx ENDP
FindExecutableImageExW PROC
    jmp qword ptr [ptr_FindExecutableImageExW]
FindExecutableImageExW ENDP
FindFileInPath PROC
    jmp qword ptr [ptr_FindFileInPath]
FindFileInPath ENDP
FindFileInSearchPath PROC
    jmp qword ptr [ptr_FindFileInSearchPath]
FindFileInSearchPath ENDP
GetTimestampForLoadedLibrary PROC
    jmp qword ptr [ptr_GetTimestampForLoadedLibrary]
GetTimestampForLoadedLibrary ENDP
ImageDirectoryEntryToData PROC
    jmp qword ptr [ptr_ImageDirectoryEntryToData]
ImageDirectoryEntryToData ENDP
ImageDirectoryEntryToDataEx PROC
    jmp qword ptr [ptr_ImageDirectoryEntryToDataEx]
ImageDirectoryEntryToDataEx ENDP
ImageNtHeader PROC
    jmp qword ptr [ptr_ImageNtHeader]
ImageNtHeader ENDP
ImageRvaToSection PROC
    jmp qword ptr [ptr_ImageRvaToSection]
ImageRvaToSection ENDP
ImageRvaToVa PROC
    jmp qword ptr [ptr_ImageRvaToVa]
ImageRvaToVa ENDP
ImagehlpApiVersion PROC
    jmp qword ptr [ptr_ImagehlpApiVersion]
ImagehlpApiVersion ENDP
ImagehlpApiVersionEx PROC
    jmp qword ptr [ptr_ImagehlpApiVersionEx]
ImagehlpApiVersionEx ENDP
MakeSureDirectoryPathExists PROC
    jmp qword ptr [ptr_MakeSureDirectoryPathExists]
MakeSureDirectoryPathExists ENDP
MapDebugInformation PROC
    jmp qword ptr [ptr_MapDebugInformation]
MapDebugInformation ENDP
MiniDumpReadDumpStream PROC
    jmp qword ptr [ptr_MiniDumpReadDumpStream]
MiniDumpReadDumpStream ENDP
MiniDumpWriteDump PROC
    jmp qword ptr [ptr_MiniDumpWriteDump]
MiniDumpWriteDump ENDP
SearchTreeForFile PROC
    jmp qword ptr [ptr_SearchTreeForFile]
SearchTreeForFile ENDP
SearchTreeForFileW PROC
    jmp qword ptr [ptr_SearchTreeForFileW]
SearchTreeForFileW ENDP
StackWalk PROC
    jmp qword ptr [ptr_StackWalk]
StackWalk ENDP
StackWalk64 PROC
    jmp qword ptr [ptr_StackWalk64]
StackWalk64 ENDP
StackWalkEx PROC
    jmp qword ptr [ptr_StackWalkEx]
StackWalkEx ENDP
SymAddSourceStream PROC
    jmp qword ptr [ptr_SymAddSourceStream]
SymAddSourceStream ENDP
SymAddSourceStreamA PROC
    jmp qword ptr [ptr_SymAddSourceStreamA]
SymAddSourceStreamA ENDP
SymAddSourceStreamW PROC
    jmp qword ptr [ptr_SymAddSourceStreamW]
SymAddSourceStreamW ENDP
SymAddSymbol PROC
    jmp qword ptr [ptr_SymAddSymbol]
SymAddSymbol ENDP
SymAddSymbolW PROC
    jmp qword ptr [ptr_SymAddSymbolW]
SymAddSymbolW ENDP
SymAddrIncludeInlineTrace PROC
    jmp qword ptr [ptr_SymAddrIncludeInlineTrace]
SymAddrIncludeInlineTrace ENDP
SymCleanup PROC
    jmp qword ptr [ptr_SymCleanup]
SymCleanup ENDP
SymCompareInlineTrace PROC
    jmp qword ptr [ptr_SymCompareInlineTrace]
SymCompareInlineTrace ENDP
SymDeleteSymbol PROC
    jmp qword ptr [ptr_SymDeleteSymbol]
SymDeleteSymbol ENDP
SymDeleteSymbolW PROC
    jmp qword ptr [ptr_SymDeleteSymbolW]
SymDeleteSymbolW ENDP
SymEnumLines PROC
    jmp qword ptr [ptr_SymEnumLines]
SymEnumLines ENDP
SymEnumLinesW PROC
    jmp qword ptr [ptr_SymEnumLinesW]
SymEnumLinesW ENDP
SymEnumProcesses PROC
    jmp qword ptr [ptr_SymEnumProcesses]
SymEnumProcesses ENDP
SymEnumSourceFileTokens PROC
    jmp qword ptr [ptr_SymEnumSourceFileTokens]
SymEnumSourceFileTokens ENDP
SymEnumSourceFiles PROC
    jmp qword ptr [ptr_SymEnumSourceFiles]
SymEnumSourceFiles ENDP
SymEnumSourceFilesW PROC
    jmp qword ptr [ptr_SymEnumSourceFilesW]
SymEnumSourceFilesW ENDP
SymEnumSourceLines PROC
    jmp qword ptr [ptr_SymEnumSourceLines]
SymEnumSourceLines ENDP
SymEnumSourceLinesW PROC
    jmp qword ptr [ptr_SymEnumSourceLinesW]
SymEnumSourceLinesW ENDP
SymEnumSym PROC
    jmp qword ptr [ptr_SymEnumSym]
SymEnumSym ENDP
SymEnumSymbols PROC
    jmp qword ptr [ptr_SymEnumSymbols]
SymEnumSymbols ENDP
SymEnumSymbolsForAddr PROC
    jmp qword ptr [ptr_SymEnumSymbolsForAddr]
SymEnumSymbolsForAddr ENDP
SymEnumSymbolsForAddrW PROC
    jmp qword ptr [ptr_SymEnumSymbolsForAddrW]
SymEnumSymbolsForAddrW ENDP
SymEnumSymbolsW PROC
    jmp qword ptr [ptr_SymEnumSymbolsW]
SymEnumSymbolsW ENDP
SymEnumTypes PROC
    jmp qword ptr [ptr_SymEnumTypes]
SymEnumTypes ENDP
SymEnumTypesByName PROC
    jmp qword ptr [ptr_SymEnumTypesByName]
SymEnumTypesByName ENDP
SymEnumTypesByNameW PROC
    jmp qword ptr [ptr_SymEnumTypesByNameW]
SymEnumTypesByNameW ENDP
SymEnumTypesW PROC
    jmp qword ptr [ptr_SymEnumTypesW]
SymEnumTypesW ENDP
SymEnumerateModules PROC
    jmp qword ptr [ptr_SymEnumerateModules]
SymEnumerateModules ENDP
SymEnumerateModules64 PROC
    jmp qword ptr [ptr_SymEnumerateModules64]
SymEnumerateModules64 ENDP
SymEnumerateModulesW64 PROC
    jmp qword ptr [ptr_SymEnumerateModulesW64]
SymEnumerateModulesW64 ENDP
SymEnumerateSymbols PROC
    jmp qword ptr [ptr_SymEnumerateSymbols]
SymEnumerateSymbols ENDP
SymEnumerateSymbols64 PROC
    jmp qword ptr [ptr_SymEnumerateSymbols64]
SymEnumerateSymbols64 ENDP
SymEnumerateSymbolsW PROC
    jmp qword ptr [ptr_SymEnumerateSymbolsW]
SymEnumerateSymbolsW ENDP
SymEnumerateSymbolsW64 PROC
    jmp qword ptr [ptr_SymEnumerateSymbolsW64]
SymEnumerateSymbolsW64 ENDP
SymFindDebugInfoFile PROC
    jmp qword ptr [ptr_SymFindDebugInfoFile]
SymFindDebugInfoFile ENDP
SymFindDebugInfoFileW PROC
    jmp qword ptr [ptr_SymFindDebugInfoFileW]
SymFindDebugInfoFileW ENDP
SymFindExecutableImage PROC
    jmp qword ptr [ptr_SymFindExecutableImage]
SymFindExecutableImage ENDP
SymFindExecutableImageW PROC
    jmp qword ptr [ptr_SymFindExecutableImageW]
SymFindExecutableImageW ENDP
SymFindFileInPath PROC
    jmp qword ptr [ptr_SymFindFileInPath]
SymFindFileInPath ENDP
SymFindFileInPathW PROC
    jmp qword ptr [ptr_SymFindFileInPathW]
SymFindFileInPathW ENDP
SymFromAddr PROC
    jmp qword ptr [ptr_SymFromAddr]
SymFromAddr ENDP
SymFromAddrW PROC
    jmp qword ptr [ptr_SymFromAddrW]
SymFromAddrW ENDP
SymFromIndex PROC
    jmp qword ptr [ptr_SymFromIndex]
SymFromIndex ENDP
SymFromIndexW PROC
    jmp qword ptr [ptr_SymFromIndexW]
SymFromIndexW ENDP
SymFromInlineContext PROC
    jmp qword ptr [ptr_SymFromInlineContext]
SymFromInlineContext ENDP
SymFromInlineContextW PROC
    jmp qword ptr [ptr_SymFromInlineContextW]
SymFromInlineContextW ENDP
SymFromName PROC
    jmp qword ptr [ptr_SymFromName]
SymFromName ENDP
SymFromNameW PROC
    jmp qword ptr [ptr_SymFromNameW]
SymFromNameW ENDP
SymFromToken PROC
    jmp qword ptr [ptr_SymFromToken]
SymFromToken ENDP
SymFromTokenW PROC
    jmp qword ptr [ptr_SymFromTokenW]
SymFromTokenW ENDP
SymFunctionTableAccess PROC
    jmp qword ptr [ptr_SymFunctionTableAccess]
SymFunctionTableAccess ENDP
SymFunctionTableAccess64 PROC
    jmp qword ptr [ptr_SymFunctionTableAccess64]
SymFunctionTableAccess64 ENDP
SymGetExtendedOption PROC
    jmp qword ptr [ptr_SymGetExtendedOption]
SymGetExtendedOption ENDP
SymGetFileLineOffsets64 PROC
    jmp qword ptr [ptr_SymGetFileLineOffsets64]
SymGetFileLineOffsets64 ENDP
SymGetHomeDirectory PROC
    jmp qword ptr [ptr_SymGetHomeDirectory]
SymGetHomeDirectory ENDP
SymGetHomeDirectoryW PROC
    jmp qword ptr [ptr_SymGetHomeDirectoryW]
SymGetHomeDirectoryW ENDP
SymGetLineFromAddr PROC
    jmp qword ptr [ptr_SymGetLineFromAddr]
SymGetLineFromAddr ENDP
SymGetLineFromAddr64 PROC
    jmp qword ptr [ptr_SymGetLineFromAddr64]
SymGetLineFromAddr64 ENDP
SymGetLineFromAddrW PROC
    jmp qword ptr [ptr_SymGetLineFromAddrW]
SymGetLineFromAddrW ENDP
SymGetLineFromAddrW64 PROC
    jmp qword ptr [ptr_SymGetLineFromAddrW64]
SymGetLineFromAddrW64 ENDP
SymGetLineFromInlineContext PROC
    jmp qword ptr [ptr_SymGetLineFromInlineContext]
SymGetLineFromInlineContext ENDP
SymGetLineFromInlineContextW PROC
    jmp qword ptr [ptr_SymGetLineFromInlineContextW]
SymGetLineFromInlineContextW ENDP
SymGetLineFromName PROC
    jmp qword ptr [ptr_SymGetLineFromName]
SymGetLineFromName ENDP
SymGetLineFromName64 PROC
    jmp qword ptr [ptr_SymGetLineFromName64]
SymGetLineFromName64 ENDP
SymGetLineFromNameW64 PROC
    jmp qword ptr [ptr_SymGetLineFromNameW64]
SymGetLineFromNameW64 ENDP
SymGetLineNext PROC
    jmp qword ptr [ptr_SymGetLineNext]
SymGetLineNext ENDP
SymGetLineNext64 PROC
    jmp qword ptr [ptr_SymGetLineNext64]
SymGetLineNext64 ENDP
SymGetLineNextW64 PROC
    jmp qword ptr [ptr_SymGetLineNextW64]
SymGetLineNextW64 ENDP
SymGetLinePrev PROC
    jmp qword ptr [ptr_SymGetLinePrev]
SymGetLinePrev ENDP
SymGetLinePrev64 PROC
    jmp qword ptr [ptr_SymGetLinePrev64]
SymGetLinePrev64 ENDP
SymGetLinePrevW64 PROC
    jmp qword ptr [ptr_SymGetLinePrevW64]
SymGetLinePrevW64 ENDP
SymGetModuleBase PROC
    jmp qword ptr [ptr_SymGetModuleBase]
SymGetModuleBase ENDP
SymGetModuleBase64 PROC
    jmp qword ptr [ptr_SymGetModuleBase64]
SymGetModuleBase64 ENDP
SymGetModuleInfo PROC
    jmp qword ptr [ptr_SymGetModuleInfo]
SymGetModuleInfo ENDP
SymGetModuleInfo64 PROC
    jmp qword ptr [ptr_SymGetModuleInfo64]
SymGetModuleInfo64 ENDP
SymGetModuleInfoW PROC
    jmp qword ptr [ptr_SymGetModuleInfoW]
SymGetModuleInfoW ENDP
SymGetModuleInfoW64 PROC
    jmp qword ptr [ptr_SymGetModuleInfoW64]
SymGetModuleInfoW64 ENDP
SymGetOmapBlockBase PROC
    jmp qword ptr [ptr_SymGetOmapBlockBase]
SymGetOmapBlockBase ENDP
SymGetOptions PROC
    jmp qword ptr [ptr_SymGetOptions]
SymGetOptions ENDP
SymGetScope PROC
    jmp qword ptr [ptr_SymGetScope]
SymGetScope ENDP
SymGetScopeW PROC
    jmp qword ptr [ptr_SymGetScopeW]
SymGetScopeW ENDP
SymGetSearchPath PROC
    jmp qword ptr [ptr_SymGetSearchPath]
SymGetSearchPath ENDP
SymGetSearchPathW PROC
    jmp qword ptr [ptr_SymGetSearchPathW]
SymGetSearchPathW ENDP
SymGetSourceFile PROC
    jmp qword ptr [ptr_SymGetSourceFile]
SymGetSourceFile ENDP
SymGetSourceFileFromToken PROC
    jmp qword ptr [ptr_SymGetSourceFileFromToken]
SymGetSourceFileFromToken ENDP
SymGetSourceFileFromTokenW PROC
    jmp qword ptr [ptr_SymGetSourceFileFromTokenW]
SymGetSourceFileFromTokenW ENDP
SymGetSourceFileToken PROC
    jmp qword ptr [ptr_SymGetSourceFileToken]
SymGetSourceFileToken ENDP
SymGetSourceFileTokenW PROC
    jmp qword ptr [ptr_SymGetSourceFileTokenW]
SymGetSourceFileTokenW ENDP
SymGetSourceFileW PROC
    jmp qword ptr [ptr_SymGetSourceFileW]
SymGetSourceFileW ENDP
SymGetSourceVarFromToken PROC
    jmp qword ptr [ptr_SymGetSourceVarFromToken]
SymGetSourceVarFromToken ENDP
SymGetSourceVarFromTokenW PROC
    jmp qword ptr [ptr_SymGetSourceVarFromTokenW]
SymGetSourceVarFromTokenW ENDP
SymGetSymFromAddr PROC
    jmp qword ptr [ptr_SymGetSymFromAddr]
SymGetSymFromAddr ENDP
SymGetSymFromAddr64 PROC
    jmp qword ptr [ptr_SymGetSymFromAddr64]
SymGetSymFromAddr64 ENDP
SymGetSymFromName PROC
    jmp qword ptr [ptr_SymGetSymFromName]
SymGetSymFromName ENDP
SymGetSymFromName64 PROC
    jmp qword ptr [ptr_SymGetSymFromName64]
SymGetSymFromName64 ENDP
SymGetSymNext PROC
    jmp qword ptr [ptr_SymGetSymNext]
SymGetSymNext ENDP
SymGetSymNext64 PROC
    jmp qword ptr [ptr_SymGetSymNext64]
SymGetSymNext64 ENDP
SymGetSymPrev PROC
    jmp qword ptr [ptr_SymGetSymPrev]
SymGetSymPrev ENDP
SymGetSymPrev64 PROC
    jmp qword ptr [ptr_SymGetSymPrev64]
SymGetSymPrev64 ENDP
SymGetSymbolFile PROC
    jmp qword ptr [ptr_SymGetSymbolFile]
SymGetSymbolFile ENDP
SymGetSymbolFileW PROC
    jmp qword ptr [ptr_SymGetSymbolFileW]
SymGetSymbolFileW ENDP
SymGetTypeFromName PROC
    jmp qword ptr [ptr_SymGetTypeFromName]
SymGetTypeFromName ENDP
SymGetTypeFromNameW PROC
    jmp qword ptr [ptr_SymGetTypeFromNameW]
SymGetTypeFromNameW ENDP
SymGetTypeInfo PROC
    jmp qword ptr [ptr_SymGetTypeInfo]
SymGetTypeInfo ENDP
SymGetTypeInfoEx PROC
    jmp qword ptr [ptr_SymGetTypeInfoEx]
SymGetTypeInfoEx ENDP
SymGetUnwindInfo PROC
    jmp qword ptr [ptr_SymGetUnwindInfo]
SymGetUnwindInfo ENDP
SymInitialize PROC
    jmp qword ptr [ptr_SymInitialize]
SymInitialize ENDP
SymInitializeW PROC
    jmp qword ptr [ptr_SymInitializeW]
SymInitializeW ENDP
SymLoadModule PROC
    jmp qword ptr [ptr_SymLoadModule]
SymLoadModule ENDP
SymLoadModule64 PROC
    jmp qword ptr [ptr_SymLoadModule64]
SymLoadModule64 ENDP
SymLoadModuleEx PROC
    jmp qword ptr [ptr_SymLoadModuleEx]
SymLoadModuleEx ENDP
SymLoadModuleExW PROC
    jmp qword ptr [ptr_SymLoadModuleExW]
SymLoadModuleExW ENDP
SymMatchFileName PROC
    jmp qword ptr [ptr_SymMatchFileName]
SymMatchFileName ENDP
SymMatchFileNameW PROC
    jmp qword ptr [ptr_SymMatchFileNameW]
SymMatchFileNameW ENDP
SymMatchString PROC
    jmp qword ptr [ptr_SymMatchString]
SymMatchString ENDP
SymMatchStringA PROC
    jmp qword ptr [ptr_SymMatchStringA]
SymMatchStringA ENDP
SymMatchStringW PROC
    jmp qword ptr [ptr_SymMatchStringW]
SymMatchStringW ENDP
SymNext PROC
    jmp qword ptr [ptr_SymNext]
SymNext ENDP
SymNextW PROC
    jmp qword ptr [ptr_SymNextW]
SymNextW ENDP
SymPrev PROC
    jmp qword ptr [ptr_SymPrev]
SymPrev ENDP
SymPrevW PROC
    jmp qword ptr [ptr_SymPrevW]
SymPrevW ENDP
SymQueryInlineTrace PROC
    jmp qword ptr [ptr_SymQueryInlineTrace]
SymQueryInlineTrace ENDP
SymRefreshModuleList PROC
    jmp qword ptr [ptr_SymRefreshModuleList]
SymRefreshModuleList ENDP
SymRegisterCallback PROC
    jmp qword ptr [ptr_SymRegisterCallback]
SymRegisterCallback ENDP
SymRegisterCallback64 PROC
    jmp qword ptr [ptr_SymRegisterCallback64]
SymRegisterCallback64 ENDP
SymRegisterCallbackW64 PROC
    jmp qword ptr [ptr_SymRegisterCallbackW64]
SymRegisterCallbackW64 ENDP
SymRegisterFunctionEntryCallback PROC
    jmp qword ptr [ptr_SymRegisterFunctionEntryCallback]
SymRegisterFunctionEntryCallback ENDP
SymRegisterFunctionEntryCallback64 PROC
    jmp qword ptr [ptr_SymRegisterFunctionEntryCallback64]
SymRegisterFunctionEntryCallback64 ENDP
SymSearch PROC
    jmp qword ptr [ptr_SymSearch]
SymSearch ENDP
SymSearchW PROC
    jmp qword ptr [ptr_SymSearchW]
SymSearchW ENDP
SymSetContext PROC
    jmp qword ptr [ptr_SymSetContext]
SymSetContext ENDP
SymSetExtendedOption PROC
    jmp qword ptr [ptr_SymSetExtendedOption]
SymSetExtendedOption ENDP
SymSetHomeDirectory PROC
    jmp qword ptr [ptr_SymSetHomeDirectory]
SymSetHomeDirectory ENDP
SymSetHomeDirectoryW PROC
    jmp qword ptr [ptr_SymSetHomeDirectoryW]
SymSetHomeDirectoryW ENDP
SymSetOptions PROC
    jmp qword ptr [ptr_SymSetOptions]
SymSetOptions ENDP
SymSetParentWindow PROC
    jmp qword ptr [ptr_SymSetParentWindow]
SymSetParentWindow ENDP
SymSetScopeFromAddr PROC
    jmp qword ptr [ptr_SymSetScopeFromAddr]
SymSetScopeFromAddr ENDP
SymSetScopeFromIndex PROC
    jmp qword ptr [ptr_SymSetScopeFromIndex]
SymSetScopeFromIndex ENDP
SymSetScopeFromInlineContext PROC
    jmp qword ptr [ptr_SymSetScopeFromInlineContext]
SymSetScopeFromInlineContext ENDP
SymSetSearchPath PROC
    jmp qword ptr [ptr_SymSetSearchPath]
SymSetSearchPath ENDP
SymSetSearchPathW PROC
    jmp qword ptr [ptr_SymSetSearchPathW]
SymSetSearchPathW ENDP
SymSetSymWithAddr64 PROC
    jmp qword ptr [ptr_SymSetSymWithAddr64]
SymSetSymWithAddr64 ENDP
SymSrvDeltaName PROC
    jmp qword ptr [ptr_SymSrvDeltaName]
SymSrvDeltaName ENDP
SymSrvDeltaNameW PROC
    jmp qword ptr [ptr_SymSrvDeltaNameW]
SymSrvDeltaNameW ENDP
SymSrvGetFileIndexInfo PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexInfo]
SymSrvGetFileIndexInfo ENDP
SymSrvGetFileIndexInfoW PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexInfoW]
SymSrvGetFileIndexInfoW ENDP
SymSrvGetFileIndexString PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexString]
SymSrvGetFileIndexString ENDP
SymSrvGetFileIndexStringW PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexStringW]
SymSrvGetFileIndexStringW ENDP
SymSrvGetFileIndexes PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexes]
SymSrvGetFileIndexes ENDP
SymSrvGetFileIndexesW PROC
    jmp qword ptr [ptr_SymSrvGetFileIndexesW]
SymSrvGetFileIndexesW ENDP
SymSrvGetSupplement PROC
    jmp qword ptr [ptr_SymSrvGetSupplement]
SymSrvGetSupplement ENDP
SymSrvGetSupplementW PROC
    jmp qword ptr [ptr_SymSrvGetSupplementW]
SymSrvGetSupplementW ENDP
SymSrvIsStore PROC
    jmp qword ptr [ptr_SymSrvIsStore]
SymSrvIsStore ENDP
SymSrvIsStoreW PROC
    jmp qword ptr [ptr_SymSrvIsStoreW]
SymSrvIsStoreW ENDP
SymSrvStoreFile PROC
    jmp qword ptr [ptr_SymSrvStoreFile]
SymSrvStoreFile ENDP
SymSrvStoreFileW PROC
    jmp qword ptr [ptr_SymSrvStoreFileW]
SymSrvStoreFileW ENDP
SymSrvStoreSupplement PROC
    jmp qword ptr [ptr_SymSrvStoreSupplement]
SymSrvStoreSupplement ENDP
SymSrvStoreSupplementW PROC
    jmp qword ptr [ptr_SymSrvStoreSupplementW]
SymSrvStoreSupplementW ENDP
SymUnDName PROC
    jmp qword ptr [ptr_SymUnDName]
SymUnDName ENDP
SymUnDName64 PROC
    jmp qword ptr [ptr_SymUnDName64]
SymUnDName64 ENDP
SymUnloadModule PROC
    jmp qword ptr [ptr_SymUnloadModule]
SymUnloadModule ENDP
SymUnloadModule64 PROC
    jmp qword ptr [ptr_SymUnloadModule64]
SymUnloadModule64 ENDP
UnDecorateSymbolName PROC
    jmp qword ptr [ptr_UnDecorateSymbolName]
UnDecorateSymbolName ENDP
UnDecorateSymbolNameW PROC
    jmp qword ptr [ptr_UnDecorateSymbolNameW]
UnDecorateSymbolNameW ENDP
UnmapDebugInformation PROC
    jmp qword ptr [ptr_UnmapDebugInformation]
UnmapDebugInformation ENDP
WinDbgExtensionDllInit PROC
    jmp qword ptr [ptr_WinDbgExtensionDllInit]
WinDbgExtensionDllInit ENDP

END
