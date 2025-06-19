#pragma once
#include "CoreMinimal.h"
#include "ESBUIHoldButtonStateType.generated.h"

UENUM()
enum class ESBUIHoldButtonStateType : uint8 {
    None,
    Enable,
    Disable,
    Ready,
    Hold,
    Lock,
};

