#pragma once
#include "CoreMinimal.h"
#include "ESBUISkillSlotState.generated.h"

UENUM()
enum class ESBUISkillSlotState {
    None,
    Enable,
    Disable,
    Acquisition,
    Lock,
    LockByAchievement,
    DisableByNewGamePlus,
};

