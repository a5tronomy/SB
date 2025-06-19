#pragma once
#include "CoreMinimal.h"
#include "ESBGameWorldState.generated.h"

UENUM()
enum ESBGameWorldState {
    ESBGameWorldState_None,
    ESBGameWorldState_BeginCreateZone,
    ESBGameWorldState_CreatingZoneObject,
    ESBGameWorldState_CreateZoneComplete,
    ESBGameWorldState_BeginDestoryZone,
    ESBGameWorldState_RequestDestroyZone,
    ESBGameWorldState_DestoryZoneComplete,
    ESBGameWorldState_BeginChangeWorld,
    ESBGameWorldState_ChangingWorld,
    ESBGameWorldState_ChangeWorldComplete,
    ESBGameWorldState_RequestInteractZone,
    ESBGameWorldState_RequestDestroyZoneObject,
    ESBGameWorldState_RunningResetZoneObject,
    ESBGameWorldState_RequestCreateResetZoneObject,
    ESBGameWorldState_CompleteResetZone,
    ESBGameWorldState_RequestResourceCacheAsyncLoad,
    ESBGameWorldState_CompleteResourceCacheAsyncLoad,
    ESBGameWorldState_Complete,
};

