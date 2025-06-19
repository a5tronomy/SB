#pragma once
#include "CoreMinimal.h"
#include "ESBUIBossChallengeItemState.generated.h"

UENUM()
enum class ESBUIBossChallengeItemState : uint8 {
    Available,
    Unavailable,
    Cleared,
};

