#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.generated.h"

UENUM()
enum ESBUIRedDotState {
    ESBUIRedDotState_None,
    ESBUIRedDotState_New,
    ESBUIRedDotState_Dirty,
    ESBUIRedDotState_Enable,
};

