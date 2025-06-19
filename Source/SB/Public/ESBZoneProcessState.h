#pragma once
#include "CoreMinimal.h"
#include "ESBZoneProcessState.generated.h"

UENUM()
enum ESBZoneProcessState {
    ESBZoneProcessState_None,
    ESBZoneProcessState_EnterRequest,
    ESBZoneProcessState_ResetRequest,
    ESBZoneProcessState_Complete,
};

