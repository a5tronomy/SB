#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseEventStepType.generated.h"

UENUM()
enum ESBPhaseEventStepType {
    ESBPhaseEventStepType_None,
    ESBPhaseEventStepType_Event,
    ESBPhaseEventStepType_StartEvent,
    ESBPhaseEventStepType_EndEvent,
};

