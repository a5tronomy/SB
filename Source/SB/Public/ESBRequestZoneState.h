#pragma once
#include "CoreMinimal.h"
#include "ESBRequestZoneState.generated.h"

UENUM()
enum ESBRequestZoneState {
    ESBRequestZoneState_None,
    ESBRequestZoneState_Create,
    ESBRequestZoneState_Reset,
    ESBRequestZoneState_CreateComplete,
    ESBRequestZoneState_ResetComplete,
};

