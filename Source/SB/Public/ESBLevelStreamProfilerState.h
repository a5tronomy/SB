#pragma once
#include "CoreMinimal.h"
#include "ESBLevelStreamProfilerState.generated.h"

UENUM()
enum ESBLevelStreamProfilerState {
    ESBLevelStreamProfilerState_Idle,
    ESBLevelStreamProfilerState_Ready,
    ESBLevelStreamProfilerState_UnloadIterative,
    ESBLevelStreamProfilerState_GCAndWait,
    ESBLevelStreamProfilerState_CheckUnloadedAll,
    ESBLevelStreamProfilerState_Profiling,
    ESBLevelStreamProfilerState_Loading,
    ESBLevelStreamProfilerState_PostLoadWait,
    ESBLevelStreamProfilerState_ProfileLevel,
    ESBLevelStreamProfilerState_Unloading,
    ESBLevelStreamProfilerState_PostUnloadWaitForGC,
    ESBLevelStreamProfilerState_PrepareForNextLevel,
    ESBLevelStreamProfilerState_Finished,
    ESBLevelStreamProfilerState_ErrorOccured,
};

