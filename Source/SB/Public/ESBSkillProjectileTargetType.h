#pragma once
#include "CoreMinimal.h"
#include "ESBSkillProjectileTargetType.generated.h"

UENUM()
enum ESBSkillProjectileTargetType {
    SkillProjectileTargetType_MainTarget,
    SkillProjectileTargetType_OnePerTarget,
    SkillProjectileTargetType_NonTarget,
};

