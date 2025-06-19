#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileHitType.generated.h"

UENUM()
enum ESBProjectileHitType {
    ProjectileHitType_Once,
    ProjectileHitType_Repeat,
    ProjectileHitType_NoHit,
};

