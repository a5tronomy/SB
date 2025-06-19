#pragma once
#include "CoreMinimal.h"
#include "ESBSkillTreeUnlockProgressType.generated.h"

UENUM()
enum class ESBSkillTreeUnlockProgressType : uint8 {
    None,
    Ready,
    Start,
    Complete,
};

