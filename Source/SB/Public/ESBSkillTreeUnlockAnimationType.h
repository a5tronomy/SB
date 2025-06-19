#pragma once
#include "CoreMinimal.h"
#include "ESBSkillTreeUnlockAnimationType.generated.h"

UENUM()
enum class ESBSkillTreeUnlockAnimationType : int32 {
    LowerSlotWithLine,
    UpperSlotWithLine,
    SlotAndLine,
};

