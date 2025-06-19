#pragma once
#include "CoreMinimal.h"
#include "ESBConditionTriggerRunType.generated.h"

UENUM()
enum ESBConditionTriggerRunType {
    ESBConditionTriggerRunType_None,
    ESBConditionTriggerRunType_Once,
    ESBConditionTriggerRunType_Repeat,
};

