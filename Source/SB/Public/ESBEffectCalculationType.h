#pragma once
#include "CoreMinimal.h"
#include "ESBEffectCalculationType.generated.h"

UENUM()
enum ESBEffectCalculationType {
    EffectCalculationType_Static,
    EffectCalculationType_PhysicDamage,
    EffectCalculationType_ShieldDamage,
    EffectCalculationType_StaminaDamage,
    EffectCalculationType_MaxHPRate,
    EffectCalculationType_MaxHPValue,
    EffectCalculationType_FallingDamage,
    EffectCalculationType_StaticPercent,
    EffectCalculationType_StaticPercentRate,
    EffectCalculationType_EffectAttackPower,
    EffectCalculationType_MaxShieldRate,
    EffectCalculationType_HealStatic,
    EffectCalculationType_HealMaxHPRate,
    EffectCalculationType_CurrentTachyGaugeRate,
    EffectCalculationType_SetStatValue,
    EffectCalculationType_MaxStaminaRate,
    EffectCalculationType_HealMaxHPRateByTumbler,
};

