#pragma once
#include "CoreMinimal.h"
#include "ESBUIActionFinishType.generated.h"

UENUM()
enum ESBUIActionFinishType {
    ESBUIActionFinishType_None,
    ESBUIActionFinishType_Time,
    ESBUIActionFinishType_Close,
    ESBUIActionFinishType_TimeWithClose,
};

