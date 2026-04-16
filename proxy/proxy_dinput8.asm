OPTION CASEMAP:NONE

EXTERN ptr_DirectInput8Create:QWORD
EXTERN ptr_DllCanUnloadNow:QWORD
EXTERN ptr_DllGetClassObject:QWORD
EXTERN ptr_DllRegisterServer:QWORD
EXTERN ptr_DllUnregisterServer:QWORD

.code
DirectInput8Create PROC
    jmp qword ptr [ptr_DirectInput8Create]
DirectInput8Create ENDP

DllCanUnloadNow PROC
    jmp qword ptr [ptr_DllCanUnloadNow]
DllCanUnloadNow ENDP

DllGetClassObject PROC
    jmp qword ptr [ptr_DllGetClassObject]
DllGetClassObject ENDP

DllRegisterServer PROC
    jmp qword ptr [ptr_DllRegisterServer]
DllRegisterServer ENDP

DllUnregisterServer PROC
    jmp qword ptr [ptr_DllUnregisterServer]
DllUnregisterServer ENDP

END
