OPTION CASEMAP:NONE

EXTERN ptr_CloseDriver:QWORD
EXTERN ptr_DefDriverProc:QWORD
EXTERN ptr_DriverCallback:QWORD
EXTERN ptr_DrvGetModuleHandle:QWORD
EXTERN ptr_GetDriverModuleHandle:QWORD
EXTERN ptr_NotifyCallbackData:QWORD
EXTERN ptr_OpenDriver:QWORD
EXTERN ptr_PlaySound:QWORD
EXTERN ptr_PlaySoundA:QWORD
EXTERN ptr_PlaySoundW:QWORD
EXTERN ptr_SendDriverMessage:QWORD
EXTERN ptr_WOWAppExit:QWORD
EXTERN ptr_auxGetDevCapsA:QWORD
EXTERN ptr_auxGetDevCapsW:QWORD
EXTERN ptr_auxGetNumDevs:QWORD
EXTERN ptr_auxGetVolume:QWORD
EXTERN ptr_auxOutMessage:QWORD
EXTERN ptr_auxSetVolume:QWORD
EXTERN ptr_joyConfigChanged:QWORD
EXTERN ptr_joyGetDevCapsA:QWORD
EXTERN ptr_joyGetDevCapsW:QWORD
EXTERN ptr_joyGetNumDevs:QWORD
EXTERN ptr_joyGetPos:QWORD
EXTERN ptr_joyGetPosEx:QWORD
EXTERN ptr_joyGetThreshold:QWORD
EXTERN ptr_joyReleaseCapture:QWORD
EXTERN ptr_joySetCapture:QWORD
EXTERN ptr_joySetThreshold:QWORD
EXTERN ptr_mciDriverNotify:QWORD
EXTERN ptr_mciDriverYield:QWORD
EXTERN ptr_mciExecute:QWORD
EXTERN ptr_mciFreeCommandResource:QWORD
EXTERN ptr_mciGetCreatorTask:QWORD
EXTERN ptr_mciGetDeviceIDA:QWORD
EXTERN ptr_mciGetDeviceIDFromElementIDA:QWORD
EXTERN ptr_mciGetDeviceIDFromElementIDW:QWORD
EXTERN ptr_mciGetDeviceIDW:QWORD
EXTERN ptr_mciGetDriverData:QWORD
EXTERN ptr_mciGetErrorStringA:QWORD
EXTERN ptr_mciGetErrorStringW:QWORD
EXTERN ptr_mciGetYieldProc:QWORD
EXTERN ptr_mciLoadCommandResource:QWORD
EXTERN ptr_mciSendCommandA:QWORD
EXTERN ptr_mciSendCommandW:QWORD
EXTERN ptr_mciSendStringA:QWORD
EXTERN ptr_mciSendStringW:QWORD
EXTERN ptr_mciSetDriverData:QWORD
EXTERN ptr_mciSetYieldProc:QWORD
EXTERN ptr_midiConnect:QWORD
EXTERN ptr_midiDisconnect:QWORD
EXTERN ptr_midiInAddBuffer:QWORD
EXTERN ptr_midiInClose:QWORD
EXTERN ptr_midiInGetDevCapsA:QWORD
EXTERN ptr_midiInGetDevCapsW:QWORD
EXTERN ptr_midiInGetErrorTextA:QWORD
EXTERN ptr_midiInGetErrorTextW:QWORD
EXTERN ptr_midiInGetID:QWORD
EXTERN ptr_midiInGetNumDevs:QWORD
EXTERN ptr_midiInMessage:QWORD
EXTERN ptr_midiInOpen:QWORD
EXTERN ptr_midiInPrepareHeader:QWORD
EXTERN ptr_midiInReset:QWORD
EXTERN ptr_midiInStart:QWORD
EXTERN ptr_midiInStop:QWORD
EXTERN ptr_midiInUnprepareHeader:QWORD
EXTERN ptr_midiOutCacheDrumPatches:QWORD
EXTERN ptr_midiOutCachePatches:QWORD
EXTERN ptr_midiOutClose:QWORD
EXTERN ptr_midiOutGetDevCapsA:QWORD
EXTERN ptr_midiOutGetDevCapsW:QWORD
EXTERN ptr_midiOutGetErrorTextA:QWORD
EXTERN ptr_midiOutGetErrorTextW:QWORD
EXTERN ptr_midiOutGetID:QWORD
EXTERN ptr_midiOutGetNumDevs:QWORD
EXTERN ptr_midiOutGetVolume:QWORD
EXTERN ptr_midiOutLongMsg:QWORD
EXTERN ptr_midiOutMessage:QWORD
EXTERN ptr_midiOutOpen:QWORD
EXTERN ptr_midiOutPrepareHeader:QWORD
EXTERN ptr_midiOutReset:QWORD
EXTERN ptr_midiOutSetVolume:QWORD
EXTERN ptr_midiOutShortMsg:QWORD
EXTERN ptr_midiOutUnprepareHeader:QWORD
EXTERN ptr_midiStreamClose:QWORD
EXTERN ptr_midiStreamOpen:QWORD
EXTERN ptr_midiStreamOut:QWORD
EXTERN ptr_midiStreamPause:QWORD
EXTERN ptr_midiStreamPosition:QWORD
EXTERN ptr_midiStreamProperty:QWORD
EXTERN ptr_midiStreamRestart:QWORD
EXTERN ptr_midiStreamStop:QWORD
EXTERN ptr_mixerClose:QWORD
EXTERN ptr_mixerGetControlDetailsA:QWORD
EXTERN ptr_mixerGetControlDetailsW:QWORD
EXTERN ptr_mixerGetDevCapsA:QWORD
EXTERN ptr_mixerGetDevCapsW:QWORD
EXTERN ptr_mixerGetID:QWORD
EXTERN ptr_mixerGetLineControlsA:QWORD
EXTERN ptr_mixerGetLineControlsW:QWORD
EXTERN ptr_mixerGetLineInfoA:QWORD
EXTERN ptr_mixerGetLineInfoW:QWORD
EXTERN ptr_mixerGetNumDevs:QWORD
EXTERN ptr_mixerMessage:QWORD
EXTERN ptr_mixerOpen:QWORD
EXTERN ptr_mixerSetControlDetails:QWORD
EXTERN ptr_mmGetCurrentTask:QWORD
EXTERN ptr_mmTaskBlock:QWORD
EXTERN ptr_mmTaskCreate:QWORD
EXTERN ptr_mmTaskSignal:QWORD
EXTERN ptr_mmTaskYield:QWORD
EXTERN ptr_mmioAdvance:QWORD
EXTERN ptr_mmioAscend:QWORD
EXTERN ptr_mmioClose:QWORD
EXTERN ptr_mmioCreateChunk:QWORD
EXTERN ptr_mmioDescend:QWORD
EXTERN ptr_mmioFlush:QWORD
EXTERN ptr_mmioGetInfo:QWORD
EXTERN ptr_mmioInstallIOProcA:QWORD
EXTERN ptr_mmioInstallIOProcW:QWORD
EXTERN ptr_mmioOpenA:QWORD
EXTERN ptr_mmioOpenW:QWORD
EXTERN ptr_mmioRead:QWORD
EXTERN ptr_mmioRenameA:QWORD
EXTERN ptr_mmioRenameW:QWORD
EXTERN ptr_mmioSeek:QWORD
EXTERN ptr_mmioSendMessage:QWORD
EXTERN ptr_mmioSetBuffer:QWORD
EXTERN ptr_mmioSetInfo:QWORD
EXTERN ptr_mmioStringToFOURCCA:QWORD
EXTERN ptr_mmioStringToFOURCCW:QWORD
EXTERN ptr_mmioWrite:QWORD
EXTERN ptr_mmsystemGetVersion:QWORD
EXTERN ptr_sndPlaySoundA:QWORD
EXTERN ptr_sndPlaySoundW:QWORD
EXTERN ptr_timeBeginPeriod:QWORD
EXTERN ptr_timeEndPeriod:QWORD
EXTERN ptr_timeGetDevCaps:QWORD
EXTERN ptr_timeGetSystemTime:QWORD
EXTERN ptr_timeGetTime:QWORD
EXTERN ptr_timeKillEvent:QWORD
EXTERN ptr_timeSetEvent:QWORD
EXTERN ptr_waveInAddBuffer:QWORD
EXTERN ptr_waveInClose:QWORD
EXTERN ptr_waveInGetDevCapsA:QWORD
EXTERN ptr_waveInGetDevCapsW:QWORD
EXTERN ptr_waveInGetErrorTextA:QWORD
EXTERN ptr_waveInGetErrorTextW:QWORD
EXTERN ptr_waveInGetID:QWORD
EXTERN ptr_waveInGetNumDevs:QWORD
EXTERN ptr_waveInGetPosition:QWORD
EXTERN ptr_waveInMessage:QWORD
EXTERN ptr_waveInOpen:QWORD
EXTERN ptr_waveInPrepareHeader:QWORD
EXTERN ptr_waveInReset:QWORD
EXTERN ptr_waveInStart:QWORD
EXTERN ptr_waveInStop:QWORD
EXTERN ptr_waveInUnprepareHeader:QWORD
EXTERN ptr_waveOutBreakLoop:QWORD
EXTERN ptr_waveOutClose:QWORD
EXTERN ptr_waveOutGetDevCapsA:QWORD
EXTERN ptr_waveOutGetDevCapsW:QWORD
EXTERN ptr_waveOutGetErrorTextA:QWORD
EXTERN ptr_waveOutGetErrorTextW:QWORD
EXTERN ptr_waveOutGetID:QWORD
EXTERN ptr_waveOutGetNumDevs:QWORD
EXTERN ptr_waveOutGetPitch:QWORD
EXTERN ptr_waveOutGetPlaybackRate:QWORD
EXTERN ptr_waveOutGetPosition:QWORD
EXTERN ptr_waveOutGetVolume:QWORD
EXTERN ptr_waveOutMessage:QWORD
EXTERN ptr_waveOutOpen:QWORD
EXTERN ptr_waveOutPrepareHeader:QWORD
EXTERN ptr_waveOutReset:QWORD
EXTERN ptr_waveOutRestart:QWORD
EXTERN ptr_waveOutSetPitch:QWORD
EXTERN ptr_waveOutSetPlaybackRate:QWORD
EXTERN ptr_waveOutSetVolume:QWORD
EXTERN ptr_waveOutUnprepareHeader:QWORD
EXTERN ptr_waveOutWrite:QWORD

.code
CloseDriver PROC
    jmp qword ptr [ptr_CloseDriver]
CloseDriver ENDP

DefDriverProc PROC
    jmp qword ptr [ptr_DefDriverProc]
DefDriverProc ENDP

DriverCallback PROC
    jmp qword ptr [ptr_DriverCallback]
DriverCallback ENDP

DrvGetModuleHandle PROC
    jmp qword ptr [ptr_DrvGetModuleHandle]
DrvGetModuleHandle ENDP

GetDriverModuleHandle PROC
    jmp qword ptr [ptr_GetDriverModuleHandle]
GetDriverModuleHandle ENDP

NotifyCallbackData PROC
    jmp qword ptr [ptr_NotifyCallbackData]
NotifyCallbackData ENDP

OpenDriver PROC
    jmp qword ptr [ptr_OpenDriver]
OpenDriver ENDP

PlaySound PROC
    jmp qword ptr [ptr_PlaySound]
PlaySound ENDP

PlaySoundA PROC
    jmp qword ptr [ptr_PlaySoundA]
PlaySoundA ENDP

PlaySoundW PROC
    jmp qword ptr [ptr_PlaySoundW]
PlaySoundW ENDP

SendDriverMessage PROC
    jmp qword ptr [ptr_SendDriverMessage]
SendDriverMessage ENDP

WOWAppExit PROC
    jmp qword ptr [ptr_WOWAppExit]
WOWAppExit ENDP

auxGetDevCapsA PROC
    jmp qword ptr [ptr_auxGetDevCapsA]
auxGetDevCapsA ENDP

auxGetDevCapsW PROC
    jmp qword ptr [ptr_auxGetDevCapsW]
auxGetDevCapsW ENDP

auxGetNumDevs PROC
    jmp qword ptr [ptr_auxGetNumDevs]
auxGetNumDevs ENDP

auxGetVolume PROC
    jmp qword ptr [ptr_auxGetVolume]
auxGetVolume ENDP

auxOutMessage PROC
    jmp qword ptr [ptr_auxOutMessage]
auxOutMessage ENDP

auxSetVolume PROC
    jmp qword ptr [ptr_auxSetVolume]
auxSetVolume ENDP

joyConfigChanged PROC
    jmp qword ptr [ptr_joyConfigChanged]
joyConfigChanged ENDP

joyGetDevCapsA PROC
    jmp qword ptr [ptr_joyGetDevCapsA]
joyGetDevCapsA ENDP

joyGetDevCapsW PROC
    jmp qword ptr [ptr_joyGetDevCapsW]
joyGetDevCapsW ENDP

joyGetNumDevs PROC
    jmp qword ptr [ptr_joyGetNumDevs]
joyGetNumDevs ENDP

joyGetPos PROC
    jmp qword ptr [ptr_joyGetPos]
joyGetPos ENDP

joyGetPosEx PROC
    jmp qword ptr [ptr_joyGetPosEx]
joyGetPosEx ENDP

joyGetThreshold PROC
    jmp qword ptr [ptr_joyGetThreshold]
joyGetThreshold ENDP

joyReleaseCapture PROC
    jmp qword ptr [ptr_joyReleaseCapture]
joyReleaseCapture ENDP

joySetCapture PROC
    jmp qword ptr [ptr_joySetCapture]
joySetCapture ENDP

joySetThreshold PROC
    jmp qword ptr [ptr_joySetThreshold]
joySetThreshold ENDP

mciDriverNotify PROC
    jmp qword ptr [ptr_mciDriverNotify]
mciDriverNotify ENDP

mciDriverYield PROC
    jmp qword ptr [ptr_mciDriverYield]
mciDriverYield ENDP

mciExecute PROC
    jmp qword ptr [ptr_mciExecute]
mciExecute ENDP

mciFreeCommandResource PROC
    jmp qword ptr [ptr_mciFreeCommandResource]
mciFreeCommandResource ENDP

mciGetCreatorTask PROC
    jmp qword ptr [ptr_mciGetCreatorTask]
mciGetCreatorTask ENDP

mciGetDeviceIDA PROC
    jmp qword ptr [ptr_mciGetDeviceIDA]
mciGetDeviceIDA ENDP

mciGetDeviceIDFromElementIDA PROC
    jmp qword ptr [ptr_mciGetDeviceIDFromElementIDA]
mciGetDeviceIDFromElementIDA ENDP

mciGetDeviceIDFromElementIDW PROC
    jmp qword ptr [ptr_mciGetDeviceIDFromElementIDW]
mciGetDeviceIDFromElementIDW ENDP

mciGetDeviceIDW PROC
    jmp qword ptr [ptr_mciGetDeviceIDW]
mciGetDeviceIDW ENDP

mciGetDriverData PROC
    jmp qword ptr [ptr_mciGetDriverData]
mciGetDriverData ENDP

mciGetErrorStringA PROC
    jmp qword ptr [ptr_mciGetErrorStringA]
mciGetErrorStringA ENDP

mciGetErrorStringW PROC
    jmp qword ptr [ptr_mciGetErrorStringW]
mciGetErrorStringW ENDP

mciGetYieldProc PROC
    jmp qword ptr [ptr_mciGetYieldProc]
mciGetYieldProc ENDP

mciLoadCommandResource PROC
    jmp qword ptr [ptr_mciLoadCommandResource]
mciLoadCommandResource ENDP

mciSendCommandA PROC
    jmp qword ptr [ptr_mciSendCommandA]
mciSendCommandA ENDP

mciSendCommandW PROC
    jmp qword ptr [ptr_mciSendCommandW]
mciSendCommandW ENDP

mciSendStringA PROC
    jmp qword ptr [ptr_mciSendStringA]
mciSendStringA ENDP

mciSendStringW PROC
    jmp qword ptr [ptr_mciSendStringW]
mciSendStringW ENDP

mciSetDriverData PROC
    jmp qword ptr [ptr_mciSetDriverData]
mciSetDriverData ENDP

mciSetYieldProc PROC
    jmp qword ptr [ptr_mciSetYieldProc]
mciSetYieldProc ENDP

midiConnect PROC
    jmp qword ptr [ptr_midiConnect]
midiConnect ENDP

midiDisconnect PROC
    jmp qword ptr [ptr_midiDisconnect]
midiDisconnect ENDP

midiInAddBuffer PROC
    jmp qword ptr [ptr_midiInAddBuffer]
midiInAddBuffer ENDP

midiInClose PROC
    jmp qword ptr [ptr_midiInClose]
midiInClose ENDP

midiInGetDevCapsA PROC
    jmp qword ptr [ptr_midiInGetDevCapsA]
midiInGetDevCapsA ENDP

midiInGetDevCapsW PROC
    jmp qword ptr [ptr_midiInGetDevCapsW]
midiInGetDevCapsW ENDP

midiInGetErrorTextA PROC
    jmp qword ptr [ptr_midiInGetErrorTextA]
midiInGetErrorTextA ENDP

midiInGetErrorTextW PROC
    jmp qword ptr [ptr_midiInGetErrorTextW]
midiInGetErrorTextW ENDP

midiInGetID PROC
    jmp qword ptr [ptr_midiInGetID]
midiInGetID ENDP

midiInGetNumDevs PROC
    jmp qword ptr [ptr_midiInGetNumDevs]
midiInGetNumDevs ENDP

midiInMessage PROC
    jmp qword ptr [ptr_midiInMessage]
midiInMessage ENDP

midiInOpen PROC
    jmp qword ptr [ptr_midiInOpen]
midiInOpen ENDP

midiInPrepareHeader PROC
    jmp qword ptr [ptr_midiInPrepareHeader]
midiInPrepareHeader ENDP

midiInReset PROC
    jmp qword ptr [ptr_midiInReset]
midiInReset ENDP

midiInStart PROC
    jmp qword ptr [ptr_midiInStart]
midiInStart ENDP

midiInStop PROC
    jmp qword ptr [ptr_midiInStop]
midiInStop ENDP

midiInUnprepareHeader PROC
    jmp qword ptr [ptr_midiInUnprepareHeader]
midiInUnprepareHeader ENDP

midiOutCacheDrumPatches PROC
    jmp qword ptr [ptr_midiOutCacheDrumPatches]
midiOutCacheDrumPatches ENDP

midiOutCachePatches PROC
    jmp qword ptr [ptr_midiOutCachePatches]
midiOutCachePatches ENDP

midiOutClose PROC
    jmp qword ptr [ptr_midiOutClose]
midiOutClose ENDP

midiOutGetDevCapsA PROC
    jmp qword ptr [ptr_midiOutGetDevCapsA]
midiOutGetDevCapsA ENDP

midiOutGetDevCapsW PROC
    jmp qword ptr [ptr_midiOutGetDevCapsW]
midiOutGetDevCapsW ENDP

midiOutGetErrorTextA PROC
    jmp qword ptr [ptr_midiOutGetErrorTextA]
midiOutGetErrorTextA ENDP

midiOutGetErrorTextW PROC
    jmp qword ptr [ptr_midiOutGetErrorTextW]
midiOutGetErrorTextW ENDP

midiOutGetID PROC
    jmp qword ptr [ptr_midiOutGetID]
midiOutGetID ENDP

midiOutGetNumDevs PROC
    jmp qword ptr [ptr_midiOutGetNumDevs]
midiOutGetNumDevs ENDP

midiOutGetVolume PROC
    jmp qword ptr [ptr_midiOutGetVolume]
midiOutGetVolume ENDP

midiOutLongMsg PROC
    jmp qword ptr [ptr_midiOutLongMsg]
midiOutLongMsg ENDP

midiOutMessage PROC
    jmp qword ptr [ptr_midiOutMessage]
midiOutMessage ENDP

midiOutOpen PROC
    jmp qword ptr [ptr_midiOutOpen]
midiOutOpen ENDP

midiOutPrepareHeader PROC
    jmp qword ptr [ptr_midiOutPrepareHeader]
midiOutPrepareHeader ENDP

midiOutReset PROC
    jmp qword ptr [ptr_midiOutReset]
midiOutReset ENDP

midiOutSetVolume PROC
    jmp qword ptr [ptr_midiOutSetVolume]
midiOutSetVolume ENDP

midiOutShortMsg PROC
    jmp qword ptr [ptr_midiOutShortMsg]
midiOutShortMsg ENDP

midiOutUnprepareHeader PROC
    jmp qword ptr [ptr_midiOutUnprepareHeader]
midiOutUnprepareHeader ENDP

midiStreamClose PROC
    jmp qword ptr [ptr_midiStreamClose]
midiStreamClose ENDP

midiStreamOpen PROC
    jmp qword ptr [ptr_midiStreamOpen]
midiStreamOpen ENDP

midiStreamOut PROC
    jmp qword ptr [ptr_midiStreamOut]
midiStreamOut ENDP

midiStreamPause PROC
    jmp qword ptr [ptr_midiStreamPause]
midiStreamPause ENDP

midiStreamPosition PROC
    jmp qword ptr [ptr_midiStreamPosition]
midiStreamPosition ENDP

midiStreamProperty PROC
    jmp qword ptr [ptr_midiStreamProperty]
midiStreamProperty ENDP

midiStreamRestart PROC
    jmp qword ptr [ptr_midiStreamRestart]
midiStreamRestart ENDP

midiStreamStop PROC
    jmp qword ptr [ptr_midiStreamStop]
midiStreamStop ENDP

mixerClose PROC
    jmp qword ptr [ptr_mixerClose]
mixerClose ENDP

mixerGetControlDetailsA PROC
    jmp qword ptr [ptr_mixerGetControlDetailsA]
mixerGetControlDetailsA ENDP

mixerGetControlDetailsW PROC
    jmp qword ptr [ptr_mixerGetControlDetailsW]
mixerGetControlDetailsW ENDP

mixerGetDevCapsA PROC
    jmp qword ptr [ptr_mixerGetDevCapsA]
mixerGetDevCapsA ENDP

mixerGetDevCapsW PROC
    jmp qword ptr [ptr_mixerGetDevCapsW]
mixerGetDevCapsW ENDP

mixerGetID PROC
    jmp qword ptr [ptr_mixerGetID]
mixerGetID ENDP

mixerGetLineControlsA PROC
    jmp qword ptr [ptr_mixerGetLineControlsA]
mixerGetLineControlsA ENDP

mixerGetLineControlsW PROC
    jmp qword ptr [ptr_mixerGetLineControlsW]
mixerGetLineControlsW ENDP

mixerGetLineInfoA PROC
    jmp qword ptr [ptr_mixerGetLineInfoA]
mixerGetLineInfoA ENDP

mixerGetLineInfoW PROC
    jmp qword ptr [ptr_mixerGetLineInfoW]
mixerGetLineInfoW ENDP

mixerGetNumDevs PROC
    jmp qword ptr [ptr_mixerGetNumDevs]
mixerGetNumDevs ENDP

mixerMessage PROC
    jmp qword ptr [ptr_mixerMessage]
mixerMessage ENDP

mixerOpen PROC
    jmp qword ptr [ptr_mixerOpen]
mixerOpen ENDP

mixerSetControlDetails PROC
    jmp qword ptr [ptr_mixerSetControlDetails]
mixerSetControlDetails ENDP

mmGetCurrentTask PROC
    jmp qword ptr [ptr_mmGetCurrentTask]
mmGetCurrentTask ENDP

mmTaskBlock PROC
    jmp qword ptr [ptr_mmTaskBlock]
mmTaskBlock ENDP

mmTaskCreate PROC
    jmp qword ptr [ptr_mmTaskCreate]
mmTaskCreate ENDP

mmTaskSignal PROC
    jmp qword ptr [ptr_mmTaskSignal]
mmTaskSignal ENDP

mmTaskYield PROC
    jmp qword ptr [ptr_mmTaskYield]
mmTaskYield ENDP

mmioAdvance PROC
    jmp qword ptr [ptr_mmioAdvance]
mmioAdvance ENDP

mmioAscend PROC
    jmp qword ptr [ptr_mmioAscend]
mmioAscend ENDP

mmioClose PROC
    jmp qword ptr [ptr_mmioClose]
mmioClose ENDP

mmioCreateChunk PROC
    jmp qword ptr [ptr_mmioCreateChunk]
mmioCreateChunk ENDP

mmioDescend PROC
    jmp qword ptr [ptr_mmioDescend]
mmioDescend ENDP

mmioFlush PROC
    jmp qword ptr [ptr_mmioFlush]
mmioFlush ENDP

mmioGetInfo PROC
    jmp qword ptr [ptr_mmioGetInfo]
mmioGetInfo ENDP

mmioInstallIOProcA PROC
    jmp qword ptr [ptr_mmioInstallIOProcA]
mmioInstallIOProcA ENDP

mmioInstallIOProcW PROC
    jmp qword ptr [ptr_mmioInstallIOProcW]
mmioInstallIOProcW ENDP

mmioOpenA PROC
    jmp qword ptr [ptr_mmioOpenA]
mmioOpenA ENDP

mmioOpenW PROC
    jmp qword ptr [ptr_mmioOpenW]
mmioOpenW ENDP

mmioRead PROC
    jmp qword ptr [ptr_mmioRead]
mmioRead ENDP

mmioRenameA PROC
    jmp qword ptr [ptr_mmioRenameA]
mmioRenameA ENDP

mmioRenameW PROC
    jmp qword ptr [ptr_mmioRenameW]
mmioRenameW ENDP

mmioSeek PROC
    jmp qword ptr [ptr_mmioSeek]
mmioSeek ENDP

mmioSendMessage PROC
    jmp qword ptr [ptr_mmioSendMessage]
mmioSendMessage ENDP

mmioSetBuffer PROC
    jmp qword ptr [ptr_mmioSetBuffer]
mmioSetBuffer ENDP

mmioSetInfo PROC
    jmp qword ptr [ptr_mmioSetInfo]
mmioSetInfo ENDP

mmioStringToFOURCCA PROC
    jmp qword ptr [ptr_mmioStringToFOURCCA]
mmioStringToFOURCCA ENDP

mmioStringToFOURCCW PROC
    jmp qword ptr [ptr_mmioStringToFOURCCW]
mmioStringToFOURCCW ENDP

mmioWrite PROC
    jmp qword ptr [ptr_mmioWrite]
mmioWrite ENDP

mmsystemGetVersion PROC
    jmp qword ptr [ptr_mmsystemGetVersion]
mmsystemGetVersion ENDP

sndPlaySoundA PROC
    jmp qword ptr [ptr_sndPlaySoundA]
sndPlaySoundA ENDP

sndPlaySoundW PROC
    jmp qword ptr [ptr_sndPlaySoundW]
sndPlaySoundW ENDP

timeBeginPeriod PROC
    jmp qword ptr [ptr_timeBeginPeriod]
timeBeginPeriod ENDP

timeEndPeriod PROC
    jmp qword ptr [ptr_timeEndPeriod]
timeEndPeriod ENDP

timeGetDevCaps PROC
    jmp qword ptr [ptr_timeGetDevCaps]
timeGetDevCaps ENDP

timeGetSystemTime PROC
    jmp qword ptr [ptr_timeGetSystemTime]
timeGetSystemTime ENDP

timeGetTime PROC
    jmp qword ptr [ptr_timeGetTime]
timeGetTime ENDP

timeKillEvent PROC
    jmp qword ptr [ptr_timeKillEvent]
timeKillEvent ENDP

timeSetEvent PROC
    jmp qword ptr [ptr_timeSetEvent]
timeSetEvent ENDP

waveInAddBuffer PROC
    jmp qword ptr [ptr_waveInAddBuffer]
waveInAddBuffer ENDP

waveInClose PROC
    jmp qword ptr [ptr_waveInClose]
waveInClose ENDP

waveInGetDevCapsA PROC
    jmp qword ptr [ptr_waveInGetDevCapsA]
waveInGetDevCapsA ENDP

waveInGetDevCapsW PROC
    jmp qword ptr [ptr_waveInGetDevCapsW]
waveInGetDevCapsW ENDP

waveInGetErrorTextA PROC
    jmp qword ptr [ptr_waveInGetErrorTextA]
waveInGetErrorTextA ENDP

waveInGetErrorTextW PROC
    jmp qword ptr [ptr_waveInGetErrorTextW]
waveInGetErrorTextW ENDP

waveInGetID PROC
    jmp qword ptr [ptr_waveInGetID]
waveInGetID ENDP

waveInGetNumDevs PROC
    jmp qword ptr [ptr_waveInGetNumDevs]
waveInGetNumDevs ENDP

waveInGetPosition PROC
    jmp qword ptr [ptr_waveInGetPosition]
waveInGetPosition ENDP

waveInMessage PROC
    jmp qword ptr [ptr_waveInMessage]
waveInMessage ENDP

waveInOpen PROC
    jmp qword ptr [ptr_waveInOpen]
waveInOpen ENDP

waveInPrepareHeader PROC
    jmp qword ptr [ptr_waveInPrepareHeader]
waveInPrepareHeader ENDP

waveInReset PROC
    jmp qword ptr [ptr_waveInReset]
waveInReset ENDP

waveInStart PROC
    jmp qword ptr [ptr_waveInStart]
waveInStart ENDP

waveInStop PROC
    jmp qword ptr [ptr_waveInStop]
waveInStop ENDP

waveInUnprepareHeader PROC
    jmp qword ptr [ptr_waveInUnprepareHeader]
waveInUnprepareHeader ENDP

waveOutBreakLoop PROC
    jmp qword ptr [ptr_waveOutBreakLoop]
waveOutBreakLoop ENDP

waveOutClose PROC
    jmp qword ptr [ptr_waveOutClose]
waveOutClose ENDP

waveOutGetDevCapsA PROC
    jmp qword ptr [ptr_waveOutGetDevCapsA]
waveOutGetDevCapsA ENDP

waveOutGetDevCapsW PROC
    jmp qword ptr [ptr_waveOutGetDevCapsW]
waveOutGetDevCapsW ENDP

waveOutGetErrorTextA PROC
    jmp qword ptr [ptr_waveOutGetErrorTextA]
waveOutGetErrorTextA ENDP

waveOutGetErrorTextW PROC
    jmp qword ptr [ptr_waveOutGetErrorTextW]
waveOutGetErrorTextW ENDP

waveOutGetID PROC
    jmp qword ptr [ptr_waveOutGetID]
waveOutGetID ENDP

waveOutGetNumDevs PROC
    jmp qword ptr [ptr_waveOutGetNumDevs]
waveOutGetNumDevs ENDP

waveOutGetPitch PROC
    jmp qword ptr [ptr_waveOutGetPitch]
waveOutGetPitch ENDP

waveOutGetPlaybackRate PROC
    jmp qword ptr [ptr_waveOutGetPlaybackRate]
waveOutGetPlaybackRate ENDP

waveOutGetPosition PROC
    jmp qword ptr [ptr_waveOutGetPosition]
waveOutGetPosition ENDP

waveOutGetVolume PROC
    jmp qword ptr [ptr_waveOutGetVolume]
waveOutGetVolume ENDP

waveOutMessage PROC
    jmp qword ptr [ptr_waveOutMessage]
waveOutMessage ENDP

waveOutOpen PROC
    jmp qword ptr [ptr_waveOutOpen]
waveOutOpen ENDP

waveOutPrepareHeader PROC
    jmp qword ptr [ptr_waveOutPrepareHeader]
waveOutPrepareHeader ENDP

waveOutReset PROC
    jmp qword ptr [ptr_waveOutReset]
waveOutReset ENDP

waveOutRestart PROC
    jmp qword ptr [ptr_waveOutRestart]
waveOutRestart ENDP

waveOutSetPitch PROC
    jmp qword ptr [ptr_waveOutSetPitch]
waveOutSetPitch ENDP

waveOutSetPlaybackRate PROC
    jmp qword ptr [ptr_waveOutSetPlaybackRate]
waveOutSetPlaybackRate ENDP

waveOutSetVolume PROC
    jmp qword ptr [ptr_waveOutSetVolume]
waveOutSetVolume ENDP

waveOutUnprepareHeader PROC
    jmp qword ptr [ptr_waveOutUnprepareHeader]
waveOutUnprepareHeader ENDP

waveOutWrite PROC
    jmp qword ptr [ptr_waveOutWrite]
waveOutWrite ENDP

END
