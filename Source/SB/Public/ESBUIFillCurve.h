#pragma once
#include "CoreMinimal.h"
#include "ESBUIFillCurve.generated.h"

UENUM()
enum class ESBUIFillCurve : uint8 {
    Linear,
    Deceleration,
    Acceleration,
};

