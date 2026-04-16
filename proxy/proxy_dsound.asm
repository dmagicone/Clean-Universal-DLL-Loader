OPTION CASEMAP:NONE

EXTERN ptr_DirectSoundCreate:QWORD
EXTERN ptr_DirectSoundCreate8:QWORD
EXTERN ptr_DirectSoundCaptureCreate:QWORD
EXTERN ptr_DirectSoundCaptureCreate8:QWORD
EXTERN ptr_DirectSoundFullDuplexCreate:QWORD
EXTERN ptr_DirectSoundEnumerateA:QWORD
EXTERN ptr_DirectSoundEnumerateW:QWORD
EXTERN ptr_DirectSoundCaptureEnumerateA:QWORD
EXTERN ptr_DirectSoundCaptureEnumerateW:QWORD
EXTERN ptr_GetDeviceID:QWORD
EXTERN ptr_DllCanUnloadNow:QWORD
EXTERN ptr_DllGetClassObject:QWORD

.code
DirectSoundCreate PROC
    jmp qword ptr [ptr_DirectSoundCreate]
DirectSoundCreate ENDP

DirectSoundCreate8 PROC
    jmp qword ptr [ptr_DirectSoundCreate8]
DirectSoundCreate8 ENDP

DirectSoundCaptureCreate PROC
    jmp qword ptr [ptr_DirectSoundCaptureCreate]
DirectSoundCaptureCreate ENDP

DirectSoundCaptureCreate8 PROC
    jmp qword ptr [ptr_DirectSoundCaptureCreate8]
DirectSoundCaptureCreate8 ENDP

DirectSoundFullDuplexCreate PROC
    jmp qword ptr [ptr_DirectSoundFullDuplexCreate]
DirectSoundFullDuplexCreate ENDP

DirectSoundEnumerateA PROC
    jmp qword ptr [ptr_DirectSoundEnumerateA]
DirectSoundEnumerateA ENDP

DirectSoundEnumerateW PROC
    jmp qword ptr [ptr_DirectSoundEnumerateW]
DirectSoundEnumerateW ENDP

DirectSoundCaptureEnumerateA PROC
    jmp qword ptr [ptr_DirectSoundCaptureEnumerateA]
DirectSoundCaptureEnumerateA ENDP

DirectSoundCaptureEnumerateW PROC
    jmp qword ptr [ptr_DirectSoundCaptureEnumerateW]
DirectSoundCaptureEnumerateW ENDP

GetDeviceID PROC
    jmp qword ptr [ptr_GetDeviceID]
GetDeviceID ENDP

DllCanUnloadNow PROC
    jmp qword ptr [ptr_DllCanUnloadNow]
DllCanUnloadNow ENDP

DllGetClassObject PROC
    jmp qword ptr [ptr_DllGetClassObject]
DllGetClassObject ENDP

END
