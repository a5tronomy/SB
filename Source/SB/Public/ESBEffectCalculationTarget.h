#pragma once
#include "CoreMinimal.h"
#include "ESBEffectCalculationTarget.generated.h"

UENUM()
enum ESBEffectCalculationTarget {
    EffectCalculationTarget_Main,
    EffectCalculationTarget_Constructor,
    EffectCalculationTarget_Target,
};

