#pragma once
#include "CoreMinimal.h"
#include "ESBUINanoSuitCraftState.generated.h"

UENUM()
enum class ESBUINanoSuitCraftState : uint8 {
    Enable,
    Disable,
    Complete,
};

