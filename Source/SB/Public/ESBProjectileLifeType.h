#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileLifeType.generated.h"

UENUM()
enum ESBProjectileLifeType {
    ProjectileLifeType_SkillDependent,
    ProjectileLifeType_StepDependent,
    ProjectileLifeType_IndependentTime,
    ProjectileLifeType_Infinite,
};

