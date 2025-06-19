#pragma once
#include "CoreMinimal.h"
#include "ESBSkillType.generated.h"

UENUM()
enum ESBSkillType {
    SkillType_None,
    SkillType_MeleeAttack,
    SkillType_RangeAttack,
    SkillType_Parry,
    SkillType_Evade,
    SkillType_Link,
    SkillType_DropAttack,
    SkillType_BackStab,
};

