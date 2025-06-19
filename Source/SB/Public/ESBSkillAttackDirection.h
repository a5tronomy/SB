#pragma once
#include "CoreMinimal.h"
#include "ESBSkillAttackDirection.generated.h"

UENUM()
enum ESBSkillAttackDirection {
    SkillAttackDirection_None,
    SkillAttackDirection_LeftToRight,
    SkillAttackDirection_RightToLeft,
    SkillAttackDirection_Front,
};

