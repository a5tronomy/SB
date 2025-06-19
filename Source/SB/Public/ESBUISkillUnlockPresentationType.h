#pragma once
#include "CoreMinimal.h"
#include "ESBUISkillUnlockPresentationType.generated.h"

UENUM()
enum class ESBUISkillUnlockPresentationType : uint8 {
    None,
    UnlockTree,
    UnlockSlotByAchievement,
    UnlockNewGamePlus,
};

