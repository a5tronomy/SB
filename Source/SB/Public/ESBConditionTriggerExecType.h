#pragma once
#include "CoreMinimal.h"
#include "ESBConditionTriggerExecType.generated.h"

UENUM()
enum ESBConditionTriggerExecType {
    ESBConditionTriggerExecType_None,
    ESBConditionTriggerExecType_ToTrue,
    ESBConditionTriggerExecType_ToFalse,
    ESBConditionTriggerExecType_RunTime,
};

