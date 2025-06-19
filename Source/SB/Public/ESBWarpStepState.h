#pragma once
#include "CoreMinimal.h"
#include "ESBWarpStepState.generated.h"

UENUM()
enum ESBWarpStepState {
    ESBWarpStepState_None,
    ESBWarpStepState_StartWarp,
    ESBWarpStepState_RequestChangeWrold,
    ESBWarpStepState_ChangeWrold,
    ESBWarpStepState_CompleteChangeWrold,
    ESBWarpStepState_RequestLocation,
    ESBWarpStepState_PendingStreamLevel,
    ESBWarpStepState_SetupZone,
    ESBWarpStepState_Complete,
};

