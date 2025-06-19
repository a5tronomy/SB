#pragma once
#include "CoreMinimal.h"
#include "ESBSkillCommandActionType.generated.h"

UENUM()
enum ESBSkillCommandActionType {
    SkillCommandAction_Skill,
    SkillCommandAction_RangedFireItem,
    SkillCommandAction_RangedFireSkill,
};

