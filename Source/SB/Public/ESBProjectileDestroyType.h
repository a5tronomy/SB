#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileDestroyType.generated.h"

UENUM()
enum ESBProjectileDestroyType {
    ProjectileDestroyType_Life,
    ProjectileDestroyType_Hit,
    ProjectileDestroyType_HitAndWait,
    ProjectileDestroyType_Arrive,
    ProjectileDestroyType_ArriveAndWait,
    ProjectileDestroyType_CharacterHit,
};

