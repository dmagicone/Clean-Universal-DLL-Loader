OPTION CASEMAP:NONE

EXTERN ptr_GetFileVersionInfoA:QWORD
EXTERN ptr_GetFileVersionInfoByHandle:QWORD
EXTERN ptr_GetFileVersionInfoExA:QWORD
EXTERN ptr_GetFileVersionInfoExW:QWORD
EXTERN ptr_GetFileVersionInfoSizeA:QWORD
EXTERN ptr_GetFileVersionInfoSizeExA:QWORD
EXTERN ptr_GetFileVersionInfoSizeExW:QWORD
EXTERN ptr_GetFileVersionInfoSizeW:QWORD
EXTERN ptr_GetFileVersionInfoW:QWORD
EXTERN ptr_VerFindFileA:QWORD
EXTERN ptr_VerFindFileW:QWORD
EXTERN ptr_VerInstallFileA:QWORD
EXTERN ptr_VerInstallFileW:QWORD
EXTERN ptr_VerLanguageNameA:QWORD
EXTERN ptr_VerLanguageNameW:QWORD
EXTERN ptr_VerQueryValueA:QWORD
EXTERN ptr_VerQueryValueW:QWORD

.code
GetFileVersionInfoA PROC
    jmp qword ptr [ptr_GetFileVersionInfoA]
GetFileVersionInfoA ENDP

GetFileVersionInfoByHandle PROC
    jmp qword ptr [ptr_GetFileVersionInfoByHandle]
GetFileVersionInfoByHandle ENDP

GetFileVersionInfoExA PROC
    jmp qword ptr [ptr_GetFileVersionInfoExA]
GetFileVersionInfoExA ENDP

GetFileVersionInfoExW PROC
    jmp qword ptr [ptr_GetFileVersionInfoExW]
GetFileVersionInfoExW ENDP

GetFileVersionInfoSizeA PROC
    jmp qword ptr [ptr_GetFileVersionInfoSizeA]
GetFileVersionInfoSizeA ENDP

GetFileVersionInfoSizeExA PROC
    jmp qword ptr [ptr_GetFileVersionInfoSizeExA]
GetFileVersionInfoSizeExA ENDP

GetFileVersionInfoSizeExW PROC
    jmp qword ptr [ptr_GetFileVersionInfoSizeExW]
GetFileVersionInfoSizeExW ENDP

GetFileVersionInfoSizeW PROC
    jmp qword ptr [ptr_GetFileVersionInfoSizeW]
GetFileVersionInfoSizeW ENDP

GetFileVersionInfoW PROC
    jmp qword ptr [ptr_GetFileVersionInfoW]
GetFileVersionInfoW ENDP

VerFindFileA PROC
    jmp qword ptr [ptr_VerFindFileA]
VerFindFileA ENDP

VerFindFileW PROC
    jmp qword ptr [ptr_VerFindFileW]
VerFindFileW ENDP

VerInstallFileA PROC
    jmp qword ptr [ptr_VerInstallFileA]
VerInstallFileA ENDP

VerInstallFileW PROC
    jmp qword ptr [ptr_VerInstallFileW]
VerInstallFileW ENDP

VerLanguageNameA PROC
    jmp qword ptr [ptr_VerLanguageNameA]
VerLanguageNameA ENDP

VerLanguageNameW PROC
    jmp qword ptr [ptr_VerLanguageNameW]
VerLanguageNameW ENDP

VerQueryValueA PROC
    jmp qword ptr [ptr_VerQueryValueA]
VerQueryValueA ENDP

VerQueryValueW PROC
    jmp qword ptr [ptr_VerQueryValueW]
VerQueryValueW ENDP

END
