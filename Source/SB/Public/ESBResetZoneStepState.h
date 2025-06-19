#pragma once
#include "CoreMinimal.h"
#include "ESBResetZoneStepState.generated.h"

UENUM()
enum ESBResetZoneStepState {
    ESBResetZoneState_UnLoadLevel,
    ESBResetZoneState_RemoveObjects,
    ESBResetZoneState_CreateObjects,
    ESBResetZoneState_PostReset,
    ESBResetZoneState_Complete,
};

