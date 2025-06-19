#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorkshopEnhanceTabState.generated.h"

UENUM()
enum class ESBUIWorkshopEnhanceTabState {
    None,
    CanEnhance,
    NotEnoughMaterial,
    MaxLevel,
};

