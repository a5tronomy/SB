#pragma once
#include "CoreMinimal.h"
#include "ESBUIExospineEnhanceState.generated.h"

UENUM()
enum class ESBUIExospineEnhanceState {
    None,
    CanEnhance,
    MaxLevel,
    NotEnoughMaterial,
};

