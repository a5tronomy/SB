#pragma once
#include "CoreMinimal.h"
#include "ESBSkillHitResult.generated.h"

UENUM()
enum ESBSkillHitResult {
    SkillHitResult_None,
    SkillHitResult_Hit,
    SkillHitResult_Miss,
    SkillHitResult_Parry,
    SkillHitResult_SuperParry,
    SkillHitResult_Guard,
    SkillHitResult_GuardBlock,
};

