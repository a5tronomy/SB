#pragma once
#include "CoreMinimal.h"
#include "ESBSkillHitDetectionType.generated.h"

UENUM()
enum ESBSkillHitDetectionType {
    SkillHitDetectionType_None,
    SkillHitDetectionType_TargetFilter,
    SkillHitDetectionType_ActiveCollision,
    SkillHitDetectionType_TargetFilter_ActiveCollision,
};

