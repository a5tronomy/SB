#pragma once
#include "CoreMinimal.h"
#include "ESBUIActionExecuteType.generated.h"

UENUM()
enum ESBUIActionExecuteType {
    ESBUIActionExecuteType_None,
    ESBUIActionExecuteType_LogicCreate,
    ESBUIActionExecuteType_LogicEvent,
    ESBUIActionExecuteType_WidgetCreate,
    ESBUIActionExecuteType_InputBlock,
};

