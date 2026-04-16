#include "ProxyCore.h"
#include <cstddef>

extern "C" void* ptr_CloseDriver = nullptr;
extern "C" void* ptr_DefDriverProc = nullptr;
extern "C" void* ptr_DriverCallback = nullptr;
extern "C" void* ptr_DrvGetModuleHandle = nullptr;
extern "C" void* ptr_GetDriverModuleHandle = nullptr;
extern "C" void* ptr_NotifyCallbackData = nullptr;
extern "C" void* ptr_OpenDriver = nullptr;
extern "C" void* ptr_PlaySound = nullptr;
extern "C" void* ptr_PlaySoundA = nullptr;
extern "C" void* ptr_PlaySoundW = nullptr;
extern "C" void* ptr_SendDriverMessage = nullptr;
extern "C" void* ptr_WOWAppExit = nullptr;
extern "C" void* ptr_auxGetDevCapsA = nullptr;
extern "C" void* ptr_auxGetDevCapsW = nullptr;
extern "C" void* ptr_auxGetNumDevs = nullptr;
extern "C" void* ptr_auxGetVolume = nullptr;
extern "C" void* ptr_auxOutMessage = nullptr;
extern "C" void* ptr_auxSetVolume = nullptr;
extern "C" void* ptr_joyConfigChanged = nullptr;
extern "C" void* ptr_joyGetDevCapsA = nullptr;
extern "C" void* ptr_joyGetDevCapsW = nullptr;
extern "C" void* ptr_joyGetNumDevs = nullptr;
extern "C" void* ptr_joyGetPos = nullptr;
extern "C" void* ptr_joyGetPosEx = nullptr;
extern "C" void* ptr_joyGetThreshold = nullptr;
extern "C" void* ptr_joyReleaseCapture = nullptr;
extern "C" void* ptr_joySetCapture = nullptr;
extern "C" void* ptr_joySetThreshold = nullptr;
extern "C" void* ptr_mciDriverNotify = nullptr;
extern "C" void* ptr_mciDriverYield = nullptr;
extern "C" void* ptr_mciExecute = nullptr;
extern "C" void* ptr_mciFreeCommandResource = nullptr;
extern "C" void* ptr_mciGetCreatorTask = nullptr;
extern "C" void* ptr_mciGetDeviceIDA = nullptr;
extern "C" void* ptr_mciGetDeviceIDFromElementIDA = nullptr;
extern "C" void* ptr_mciGetDeviceIDFromElementIDW = nullptr;
extern "C" void* ptr_mciGetDeviceIDW = nullptr;
extern "C" void* ptr_mciGetDriverData = nullptr;
extern "C" void* ptr_mciGetErrorStringA = nullptr;
extern "C" void* ptr_mciGetErrorStringW = nullptr;
extern "C" void* ptr_mciGetYieldProc = nullptr;
extern "C" void* ptr_mciLoadCommandResource = nullptr;
extern "C" void* ptr_mciSendCommandA = nullptr;
extern "C" void* ptr_mciSendCommandW = nullptr;
extern "C" void* ptr_mciSendStringA = nullptr;
extern "C" void* ptr_mciSendStringW = nullptr;
extern "C" void* ptr_mciSetDriverData = nullptr;
extern "C" void* ptr_mciSetYieldProc = nullptr;
extern "C" void* ptr_midiConnect = nullptr;
extern "C" void* ptr_midiDisconnect = nullptr;
extern "C" void* ptr_midiInAddBuffer = nullptr;
extern "C" void* ptr_midiInClose = nullptr;
extern "C" void* ptr_midiInGetDevCapsA = nullptr;
extern "C" void* ptr_midiInGetDevCapsW = nullptr;
extern "C" void* ptr_midiInGetErrorTextA = nullptr;
extern "C" void* ptr_midiInGetErrorTextW = nullptr;
extern "C" void* ptr_midiInGetID = nullptr;
extern "C" void* ptr_midiInGetNumDevs = nullptr;
extern "C" void* ptr_midiInMessage = nullptr;
extern "C" void* ptr_midiInOpen = nullptr;
extern "C" void* ptr_midiInPrepareHeader = nullptr;
extern "C" void* ptr_midiInReset = nullptr;
extern "C" void* ptr_midiInStart = nullptr;
extern "C" void* ptr_midiInStop = nullptr;
extern "C" void* ptr_midiInUnprepareHeader = nullptr;
extern "C" void* ptr_midiOutCacheDrumPatches = nullptr;
extern "C" void* ptr_midiOutCachePatches = nullptr;
extern "C" void* ptr_midiOutClose = nullptr;
extern "C" void* ptr_midiOutGetDevCapsA = nullptr;
extern "C" void* ptr_midiOutGetDevCapsW = nullptr;
extern "C" void* ptr_midiOutGetErrorTextA = nullptr;
extern "C" void* ptr_midiOutGetErrorTextW = nullptr;
extern "C" void* ptr_midiOutGetID = nullptr;
extern "C" void* ptr_midiOutGetNumDevs = nullptr;
extern "C" void* ptr_midiOutGetVolume = nullptr;
extern "C" void* ptr_midiOutLongMsg = nullptr;
extern "C" void* ptr_midiOutMessage = nullptr;
extern "C" void* ptr_midiOutOpen = nullptr;
extern "C" void* ptr_midiOutPrepareHeader = nullptr;
extern "C" void* ptr_midiOutReset = nullptr;
extern "C" void* ptr_midiOutSetVolume = nullptr;
extern "C" void* ptr_midiOutShortMsg = nullptr;
extern "C" void* ptr_midiOutUnprepareHeader = nullptr;
extern "C" void* ptr_midiStreamClose = nullptr;
extern "C" void* ptr_midiStreamOpen = nullptr;
extern "C" void* ptr_midiStreamOut = nullptr;
extern "C" void* ptr_midiStreamPause = nullptr;
extern "C" void* ptr_midiStreamPosition = nullptr;
extern "C" void* ptr_midiStreamProperty = nullptr;
extern "C" void* ptr_midiStreamRestart = nullptr;
extern "C" void* ptr_midiStreamStop = nullptr;
extern "C" void* ptr_mixerClose = nullptr;
extern "C" void* ptr_mixerGetControlDetailsA = nullptr;
extern "C" void* ptr_mixerGetControlDetailsW = nullptr;
extern "C" void* ptr_mixerGetDevCapsA = nullptr;
extern "C" void* ptr_mixerGetDevCapsW = nullptr;
extern "C" void* ptr_mixerGetID = nullptr;
extern "C" void* ptr_mixerGetLineControlsA = nullptr;
extern "C" void* ptr_mixerGetLineControlsW = nullptr;
extern "C" void* ptr_mixerGetLineInfoA = nullptr;
extern "C" void* ptr_mixerGetLineInfoW = nullptr;
extern "C" void* ptr_mixerGetNumDevs = nullptr;
extern "C" void* ptr_mixerMessage = nullptr;
extern "C" void* ptr_mixerOpen = nullptr;
extern "C" void* ptr_mixerSetControlDetails = nullptr;
extern "C" void* ptr_mmGetCurrentTask = nullptr;
extern "C" void* ptr_mmTaskBlock = nullptr;
extern "C" void* ptr_mmTaskCreate = nullptr;
extern "C" void* ptr_mmTaskSignal = nullptr;
extern "C" void* ptr_mmTaskYield = nullptr;
extern "C" void* ptr_mmioAdvance = nullptr;
extern "C" void* ptr_mmioAscend = nullptr;
extern "C" void* ptr_mmioClose = nullptr;
extern "C" void* ptr_mmioCreateChunk = nullptr;
extern "C" void* ptr_mmioDescend = nullptr;
extern "C" void* ptr_mmioFlush = nullptr;
extern "C" void* ptr_mmioGetInfo = nullptr;
extern "C" void* ptr_mmioInstallIOProcA = nullptr;
extern "C" void* ptr_mmioInstallIOProcW = nullptr;
extern "C" void* ptr_mmioOpenA = nullptr;
extern "C" void* ptr_mmioOpenW = nullptr;
extern "C" void* ptr_mmioRead = nullptr;
extern "C" void* ptr_mmioRenameA = nullptr;
extern "C" void* ptr_mmioRenameW = nullptr;
extern "C" void* ptr_mmioSeek = nullptr;
extern "C" void* ptr_mmioSendMessage = nullptr;
extern "C" void* ptr_mmioSetBuffer = nullptr;
extern "C" void* ptr_mmioSetInfo = nullptr;
extern "C" void* ptr_mmioStringToFOURCCA = nullptr;
extern "C" void* ptr_mmioStringToFOURCCW = nullptr;
extern "C" void* ptr_mmioWrite = nullptr;
extern "C" void* ptr_mmsystemGetVersion = nullptr;
extern "C" void* ptr_sndPlaySoundA = nullptr;
extern "C" void* ptr_sndPlaySoundW = nullptr;
extern "C" void* ptr_timeBeginPeriod = nullptr;
extern "C" void* ptr_timeEndPeriod = nullptr;
extern "C" void* ptr_timeGetDevCaps = nullptr;
extern "C" void* ptr_timeGetSystemTime = nullptr;
extern "C" void* ptr_timeGetTime = nullptr;
extern "C" void* ptr_timeKillEvent = nullptr;
extern "C" void* ptr_timeSetEvent = nullptr;
extern "C" void* ptr_waveInAddBuffer = nullptr;
extern "C" void* ptr_waveInClose = nullptr;
extern "C" void* ptr_waveInGetDevCapsA = nullptr;
extern "C" void* ptr_waveInGetDevCapsW = nullptr;
extern "C" void* ptr_waveInGetErrorTextA = nullptr;
extern "C" void* ptr_waveInGetErrorTextW = nullptr;
extern "C" void* ptr_waveInGetID = nullptr;
extern "C" void* ptr_waveInGetNumDevs = nullptr;
extern "C" void* ptr_waveInGetPosition = nullptr;
extern "C" void* ptr_waveInMessage = nullptr;
extern "C" void* ptr_waveInOpen = nullptr;
extern "C" void* ptr_waveInPrepareHeader = nullptr;
extern "C" void* ptr_waveInReset = nullptr;
extern "C" void* ptr_waveInStart = nullptr;
extern "C" void* ptr_waveInStop = nullptr;
extern "C" void* ptr_waveInUnprepareHeader = nullptr;
extern "C" void* ptr_waveOutBreakLoop = nullptr;
extern "C" void* ptr_waveOutClose = nullptr;
extern "C" void* ptr_waveOutGetDevCapsA = nullptr;
extern "C" void* ptr_waveOutGetDevCapsW = nullptr;
extern "C" void* ptr_waveOutGetErrorTextA = nullptr;
extern "C" void* ptr_waveOutGetErrorTextW = nullptr;
extern "C" void* ptr_waveOutGetID = nullptr;
extern "C" void* ptr_waveOutGetNumDevs = nullptr;
extern "C" void* ptr_waveOutGetPitch = nullptr;
extern "C" void* ptr_waveOutGetPlaybackRate = nullptr;
extern "C" void* ptr_waveOutGetPosition = nullptr;
extern "C" void* ptr_waveOutGetVolume = nullptr;
extern "C" void* ptr_waveOutMessage = nullptr;
extern "C" void* ptr_waveOutOpen = nullptr;
extern "C" void* ptr_waveOutPrepareHeader = nullptr;
extern "C" void* ptr_waveOutReset = nullptr;
extern "C" void* ptr_waveOutRestart = nullptr;
extern "C" void* ptr_waveOutSetPitch = nullptr;
extern "C" void* ptr_waveOutSetPlaybackRate = nullptr;
extern "C" void* ptr_waveOutSetVolume = nullptr;
extern "C" void* ptr_waveOutUnprepareHeader = nullptr;
extern "C" void* ptr_waveOutWrite = nullptr;

static const char* const g_winmm_exportNames[] = {
    "CloseDriver",
    "DefDriverProc",
    "DriverCallback",
    "DrvGetModuleHandle",
    "GetDriverModuleHandle",
    "NotifyCallbackData",
    "OpenDriver",
    "PlaySound",
    "PlaySoundA",
    "PlaySoundW",
    "SendDriverMessage",
    "WOWAppExit",
    "auxGetDevCapsA",
    "auxGetDevCapsW",
    "auxGetNumDevs",
    "auxGetVolume",
    "auxOutMessage",
    "auxSetVolume",
    "joyConfigChanged",
    "joyGetDevCapsA",
    "joyGetDevCapsW",
    "joyGetNumDevs",
    "joyGetPos",
    "joyGetPosEx",
    "joyGetThreshold",
    "joyReleaseCapture",
    "joySetCapture",
    "joySetThreshold",
    "mciDriverNotify",
    "mciDriverYield",
    "mciExecute",
    "mciFreeCommandResource",
    "mciGetCreatorTask",
    "mciGetDeviceIDA",
    "mciGetDeviceIDFromElementIDA",
    "mciGetDeviceIDFromElementIDW",
    "mciGetDeviceIDW",
    "mciGetDriverData",
    "mciGetErrorStringA",
    "mciGetErrorStringW",
    "mciGetYieldProc",
    "mciLoadCommandResource",
    "mciSendCommandA",
    "mciSendCommandW",
    "mciSendStringA",
    "mciSendStringW",
    "mciSetDriverData",
    "mciSetYieldProc",
    "midiConnect",
    "midiDisconnect",
    "midiInAddBuffer",
    "midiInClose",
    "midiInGetDevCapsA",
    "midiInGetDevCapsW",
    "midiInGetErrorTextA",
    "midiInGetErrorTextW",
    "midiInGetID",
    "midiInGetNumDevs",
    "midiInMessage",
    "midiInOpen",
    "midiInPrepareHeader",
    "midiInReset",
    "midiInStart",
    "midiInStop",
    "midiInUnprepareHeader",
    "midiOutCacheDrumPatches",
    "midiOutCachePatches",
    "midiOutClose",
    "midiOutGetDevCapsA",
    "midiOutGetDevCapsW",
    "midiOutGetErrorTextA",
    "midiOutGetErrorTextW",
    "midiOutGetID",
    "midiOutGetNumDevs",
    "midiOutGetVolume",
    "midiOutLongMsg",
    "midiOutMessage",
    "midiOutOpen",
    "midiOutPrepareHeader",
    "midiOutReset",
    "midiOutSetVolume",
    "midiOutShortMsg",
    "midiOutUnprepareHeader",
    "midiStreamClose",
    "midiStreamOpen",
    "midiStreamOut",
    "midiStreamPause",
    "midiStreamPosition",
    "midiStreamProperty",
    "midiStreamRestart",
    "midiStreamStop",
    "mixerClose",
    "mixerGetControlDetailsA",
    "mixerGetControlDetailsW",
    "mixerGetDevCapsA",
    "mixerGetDevCapsW",
    "mixerGetID",
    "mixerGetLineControlsA",
    "mixerGetLineControlsW",
    "mixerGetLineInfoA",
    "mixerGetLineInfoW",
    "mixerGetNumDevs",
    "mixerMessage",
    "mixerOpen",
    "mixerSetControlDetails",
    "mmGetCurrentTask",
    "mmTaskBlock",
    "mmTaskCreate",
    "mmTaskSignal",
    "mmTaskYield",
    "mmioAdvance",
    "mmioAscend",
    "mmioClose",
    "mmioCreateChunk",
    "mmioDescend",
    "mmioFlush",
    "mmioGetInfo",
    "mmioInstallIOProcA",
    "mmioInstallIOProcW",
    "mmioOpenA",
    "mmioOpenW",
    "mmioRead",
    "mmioRenameA",
    "mmioRenameW",
    "mmioSeek",
    "mmioSendMessage",
    "mmioSetBuffer",
    "mmioSetInfo",
    "mmioStringToFOURCCA",
    "mmioStringToFOURCCW",
    "mmioWrite",
    "mmsystemGetVersion",
    "sndPlaySoundA",
    "sndPlaySoundW",
    "timeBeginPeriod",
    "timeEndPeriod",
    "timeGetDevCaps",
    "timeGetSystemTime",
    "timeGetTime",
    "timeKillEvent",
    "timeSetEvent",
    "waveInAddBuffer",
    "waveInClose",
    "waveInGetDevCapsA",
    "waveInGetDevCapsW",
    "waveInGetErrorTextA",
    "waveInGetErrorTextW",
    "waveInGetID",
    "waveInGetNumDevs",
    "waveInGetPosition",
    "waveInMessage",
    "waveInOpen",
    "waveInPrepareHeader",
    "waveInReset",
    "waveInStart",
    "waveInStop",
    "waveInUnprepareHeader",
    "waveOutBreakLoop",
    "waveOutClose",
    "waveOutGetDevCapsA",
    "waveOutGetDevCapsW",
    "waveOutGetErrorTextA",
    "waveOutGetErrorTextW",
    "waveOutGetID",
    "waveOutGetNumDevs",
    "waveOutGetPitch",
    "waveOutGetPlaybackRate",
    "waveOutGetPosition",
    "waveOutGetVolume",
    "waveOutMessage",
    "waveOutOpen",
    "waveOutPrepareHeader",
    "waveOutReset",
    "waveOutRestart",
    "waveOutSetPitch",
    "waveOutSetPlaybackRate",
    "waveOutSetVolume",
    "waveOutUnprepareHeader",
    "waveOutWrite"
};

static void** const g_winmm_exportPtrs[] = {
    &ptr_CloseDriver,
    &ptr_DefDriverProc,
    &ptr_DriverCallback,
    &ptr_DrvGetModuleHandle,
    &ptr_GetDriverModuleHandle,
    &ptr_NotifyCallbackData,
    &ptr_OpenDriver,
    &ptr_PlaySound,
    &ptr_PlaySoundA,
    &ptr_PlaySoundW,
    &ptr_SendDriverMessage,
    &ptr_WOWAppExit,
    &ptr_auxGetDevCapsA,
    &ptr_auxGetDevCapsW,
    &ptr_auxGetNumDevs,
    &ptr_auxGetVolume,
    &ptr_auxOutMessage,
    &ptr_auxSetVolume,
    &ptr_joyConfigChanged,
    &ptr_joyGetDevCapsA,
    &ptr_joyGetDevCapsW,
    &ptr_joyGetNumDevs,
    &ptr_joyGetPos,
    &ptr_joyGetPosEx,
    &ptr_joyGetThreshold,
    &ptr_joyReleaseCapture,
    &ptr_joySetCapture,
    &ptr_joySetThreshold,
    &ptr_mciDriverNotify,
    &ptr_mciDriverYield,
    &ptr_mciExecute,
    &ptr_mciFreeCommandResource,
    &ptr_mciGetCreatorTask,
    &ptr_mciGetDeviceIDA,
    &ptr_mciGetDeviceIDFromElementIDA,
    &ptr_mciGetDeviceIDFromElementIDW,
    &ptr_mciGetDeviceIDW,
    &ptr_mciGetDriverData,
    &ptr_mciGetErrorStringA,
    &ptr_mciGetErrorStringW,
    &ptr_mciGetYieldProc,
    &ptr_mciLoadCommandResource,
    &ptr_mciSendCommandA,
    &ptr_mciSendCommandW,
    &ptr_mciSendStringA,
    &ptr_mciSendStringW,
    &ptr_mciSetDriverData,
    &ptr_mciSetYieldProc,
    &ptr_midiConnect,
    &ptr_midiDisconnect,
    &ptr_midiInAddBuffer,
    &ptr_midiInClose,
    &ptr_midiInGetDevCapsA,
    &ptr_midiInGetDevCapsW,
    &ptr_midiInGetErrorTextA,
    &ptr_midiInGetErrorTextW,
    &ptr_midiInGetID,
    &ptr_midiInGetNumDevs,
    &ptr_midiInMessage,
    &ptr_midiInOpen,
    &ptr_midiInPrepareHeader,
    &ptr_midiInReset,
    &ptr_midiInStart,
    &ptr_midiInStop,
    &ptr_midiInUnprepareHeader,
    &ptr_midiOutCacheDrumPatches,
    &ptr_midiOutCachePatches,
    &ptr_midiOutClose,
    &ptr_midiOutGetDevCapsA,
    &ptr_midiOutGetDevCapsW,
    &ptr_midiOutGetErrorTextA,
    &ptr_midiOutGetErrorTextW,
    &ptr_midiOutGetID,
    &ptr_midiOutGetNumDevs,
    &ptr_midiOutGetVolume,
    &ptr_midiOutLongMsg,
    &ptr_midiOutMessage,
    &ptr_midiOutOpen,
    &ptr_midiOutPrepareHeader,
    &ptr_midiOutReset,
    &ptr_midiOutSetVolume,
    &ptr_midiOutShortMsg,
    &ptr_midiOutUnprepareHeader,
    &ptr_midiStreamClose,
    &ptr_midiStreamOpen,
    &ptr_midiStreamOut,
    &ptr_midiStreamPause,
    &ptr_midiStreamPosition,
    &ptr_midiStreamProperty,
    &ptr_midiStreamRestart,
    &ptr_midiStreamStop,
    &ptr_mixerClose,
    &ptr_mixerGetControlDetailsA,
    &ptr_mixerGetControlDetailsW,
    &ptr_mixerGetDevCapsA,
    &ptr_mixerGetDevCapsW,
    &ptr_mixerGetID,
    &ptr_mixerGetLineControlsA,
    &ptr_mixerGetLineControlsW,
    &ptr_mixerGetLineInfoA,
    &ptr_mixerGetLineInfoW,
    &ptr_mixerGetNumDevs,
    &ptr_mixerMessage,
    &ptr_mixerOpen,
    &ptr_mixerSetControlDetails,
    &ptr_mmGetCurrentTask,
    &ptr_mmTaskBlock,
    &ptr_mmTaskCreate,
    &ptr_mmTaskSignal,
    &ptr_mmTaskYield,
    &ptr_mmioAdvance,
    &ptr_mmioAscend,
    &ptr_mmioClose,
    &ptr_mmioCreateChunk,
    &ptr_mmioDescend,
    &ptr_mmioFlush,
    &ptr_mmioGetInfo,
    &ptr_mmioInstallIOProcA,
    &ptr_mmioInstallIOProcW,
    &ptr_mmioOpenA,
    &ptr_mmioOpenW,
    &ptr_mmioRead,
    &ptr_mmioRenameA,
    &ptr_mmioRenameW,
    &ptr_mmioSeek,
    &ptr_mmioSendMessage,
    &ptr_mmioSetBuffer,
    &ptr_mmioSetInfo,
    &ptr_mmioStringToFOURCCA,
    &ptr_mmioStringToFOURCCW,
    &ptr_mmioWrite,
    &ptr_mmsystemGetVersion,
    &ptr_sndPlaySoundA,
    &ptr_sndPlaySoundW,
    &ptr_timeBeginPeriod,
    &ptr_timeEndPeriod,
    &ptr_timeGetDevCaps,
    &ptr_timeGetSystemTime,
    &ptr_timeGetTime,
    &ptr_timeKillEvent,
    &ptr_timeSetEvent,
    &ptr_waveInAddBuffer,
    &ptr_waveInClose,
    &ptr_waveInGetDevCapsA,
    &ptr_waveInGetDevCapsW,
    &ptr_waveInGetErrorTextA,
    &ptr_waveInGetErrorTextW,
    &ptr_waveInGetID,
    &ptr_waveInGetNumDevs,
    &ptr_waveInGetPosition,
    &ptr_waveInMessage,
    &ptr_waveInOpen,
    &ptr_waveInPrepareHeader,
    &ptr_waveInReset,
    &ptr_waveInStart,
    &ptr_waveInStop,
    &ptr_waveInUnprepareHeader,
    &ptr_waveOutBreakLoop,
    &ptr_waveOutClose,
    &ptr_waveOutGetDevCapsA,
    &ptr_waveOutGetDevCapsW,
    &ptr_waveOutGetErrorTextA,
    &ptr_waveOutGetErrorTextW,
    &ptr_waveOutGetID,
    &ptr_waveOutGetNumDevs,
    &ptr_waveOutGetPitch,
    &ptr_waveOutGetPlaybackRate,
    &ptr_waveOutGetPosition,
    &ptr_waveOutGetVolume,
    &ptr_waveOutMessage,
    &ptr_waveOutOpen,
    &ptr_waveOutPrepareHeader,
    &ptr_waveOutReset,
    &ptr_waveOutRestart,
    &ptr_waveOutSetPitch,
    &ptr_waveOutSetPlaybackRate,
    &ptr_waveOutSetVolume,
    &ptr_waveOutUnprepareHeader,
    &ptr_waveOutWrite
};

bool InitWinmmProxy()
{
    return ResolveExports(
        g_winmm_exportNames,
        g_winmm_exportPtrs,
        sizeof(g_winmm_exportNames) / sizeof(g_winmm_exportNames[0]));
}
