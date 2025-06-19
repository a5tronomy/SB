#pragma once
#include "CoreMinimal.h"
#include "ESBAIDetectResultType.generated.h"

UENUM()
enum ESBAIDetectResultType {
    AIDetectResult_NotDetect,
    AIDetectResult_Doubt,
    AIDetectResult_Observe,
    AIDetectResult_Detect,
};

