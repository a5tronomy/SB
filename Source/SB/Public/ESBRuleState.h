#pragma once
#include "CoreMinimal.h"
#include "ESBRuleState.generated.h"

UENUM()
enum ESBRuleState {
    ESBRuleState_None,
    ESBRuleState_StartWait,
    ESBRuleState_Playing,
    ESBRuleState_EndWait,
    ESBRuleState_End,
};

