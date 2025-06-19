#pragma once
#include "CoreMinimal.h"
#include "ESBEffectConditionChainType.generated.h"

UENUM()
enum ESBEffectConditionChainType {
    EffectConditionChainType_None,
    EffectConditionChainType_HitTarget,
    EffectConditionChainType_HitMe,
    EffectConditionChainType_HitActiveCollisionToParry,
    EffectConditionChainType_HitActiveCollisionToGuard,
    EffectConditionChainType_DeadTarget,
    EffectConditionChainType_DeadMe,
    EffectConditionChainType_HitMeDamaged,
    EffectConditionChainType_HitMeProjectile,
};

