#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseEventState.generated.h"

UENUM()
enum ESBPhaseEventState {
    ESBPhaseEventState_None,
    ESBPhaseEventState_Pending,
    ESBPhaseEventState_Running,
    ESBPhaseEventState_Complete,
};

