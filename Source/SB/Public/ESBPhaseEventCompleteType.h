#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseEventCompleteType.generated.h"

UENUM()
enum ESBPhaseEventCompleteType {
    ESBPhaseEventCompleteType_None,
    ESBPhaseEventCompleteType_AllDie,
    ESBPhaseEventCompleteType_KillCount,
    ESBPhaseEventCompleteType_DurationTime,
};

