#pragma once
#include "CoreMinimal.h"
#include "ESBEnterZoneStepResultType.generated.h"

UENUM()
enum ESBEnterZoneStepResultType {
    ESBEnterZoneStepResult_None,
    ESBEnterZoneStepResult_FailDestroyZone,
    ESBEnterZoneStepResult_FailChangeWorld,
    ESBEnterZoneStepResult_FailCreateZone,
    ESBEnterZoneStepResult_Success,
};

