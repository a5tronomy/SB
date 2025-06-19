#pragma once
#include "CoreMinimal.h"
#include "ESBConditionResultType.generated.h"

UENUM()
enum ESBConditionResultType {
    ESBResult_None,
    ESBResult_Equal,
    ESBResult_Not,
    ESBResult_Touch,
    ESBResult_UnTouch,
    ESBResult_Success,
    ESBResult_Fail,
    ESBResult_Num,
};

