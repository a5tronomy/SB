#pragma once
#include "CoreMinimal.h"
#include "ESBZoneState.generated.h"

UENUM()
enum ESBZoneState {
    ESBZoneState_None,
    ESBZoneState_CreateZone,
    ESBZoneState_ResetZone,
    ESBZoneState_CompleteCreateZone,
    ESBZoneState_CompleteResetZone,
    ESBZoneState_DestroyZone,
};

