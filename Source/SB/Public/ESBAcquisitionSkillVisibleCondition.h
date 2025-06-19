#pragma once
#include "CoreMinimal.h"
#include "ESBAcquisitionSkillVisibleCondition.generated.h"

UENUM()
enum class ESBAcquisitionSkillVisibleCondition : uint8 {
    AlwaysShow,
    OnlyNewGamePlus,
};

