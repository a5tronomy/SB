#pragma once
#include "CoreMinimal.h"
#include "ESBAIDetectTargetCancel.generated.h"

UENUM()
enum ESBAIDetectTargetCancel {
    ESBAIDetectTargetCancel_ZeroHP,
    ESBAIDetectTargetCancel_Despawn,
    ESBAIDetectTargetCancel_Destroy,
};

