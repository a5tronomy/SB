#pragma once
#include "CoreMinimal.h"
#include "ESBClientEnterGameFlowState.generated.h"

UENUM()
enum ESBClientEnterGameFlowState {
    ESBClientGameFlowState_None,
    ESBClientGameFlowState_RequestChangeLevel,
    ESBClientGameFlowState_LoadingLevels,
    ESBClientGameFlowState_LoadLevelComplete,
    ESBClientGameFlowState_CreateLocalPlayer,
    ESBClientGameFlowState_CompleteLocalPlayer,
    ESBClientGameFlowState_RequestEnterZone,
    ESBClientGameFlowState_CompleteEnterZone,
    ESBClientGameFlowState_EventZoneTransitWrold,
    ESBClientGameFlowState_RequestWarpToLocation,
    ESBClientGameFlowState_SetWarpToLocation,
    ESBClientGameFlowState_WarpPendingLevels,
    ESBClientGameFlowState_AdjustWarpPositionWithStream,
    ESBClientGameFlowState_CompleteWarp,
    ESBClientGameFlowState_Complete,
    ESBClientGameFlowState_RequestResourceCacheLongWarpAsyncLoad,
    ESBClientGameFlowState_CompleteResourceCacheLongWarpAsyncLoad,
    ESBClientGameFlowState_RequestResourceCacheShortWarpAsyncLoad,
    ESBClientGameFlowState_CompleteResourceCacheShortWarpAsyncLoad,
};

