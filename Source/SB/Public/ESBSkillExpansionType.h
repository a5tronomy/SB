#pragma once
#include "CoreMinimal.h"
#include "ESBSkillExpansionType.generated.h"

UENUM()
enum ESBSkillExpansionType {
    SkillExpansionType_JustActionTime,
    SkillExpansionType_ResultSelfEffect,
    SkillExpansionType_ResultTargetEffect,
    SkillExpansionType_AdditiveEnergyRate,
    SkillExpansionType_AdditiveSkillDamageRate,
    SkillExpansionType_AdditiveAimLockOnTargetCount,
    SkillExpansionType_DecreaseCoolTime,
};

