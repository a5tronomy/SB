#pragma once
#include "CoreMinimal.h"
#include "ESBForceFeedbackConcurrencyRule.generated.h"

UENUM()
enum class ESBForceFeedbackConcurrencyRule : uint8 {
    PreventNew,
    StopOldest,
    StopLowestPriority,
};

