#pragma once
#include "CoreMinimal.h"
#include "ESBSkillTargetDetectionType.generated.h"

UENUM()
enum ESBSkillTargetDetectionType {
    SkillTargetDetectionType_TargetFilter,
    SkillTargetDetectionType_AimLockOnTarget,
    SkillTargetDetectionType_AimLockOnBounds,
};

