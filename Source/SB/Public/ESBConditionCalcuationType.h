#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCalcuationType.generated.h"

UENUM()
enum ESBConditionCalcuationType {
    ESBConditionCalcuationType_None,
    ESBConditionCalcuationType_Self,
    ESBConditionCalcuationType_Percent,
    ESBConditionCalcuationType_Absolute,
};

