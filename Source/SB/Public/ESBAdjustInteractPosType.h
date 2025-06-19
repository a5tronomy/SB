#pragma once
#include "CoreMinimal.h"
#include "ESBAdjustInteractPosType.generated.h"

UENUM()
enum ESBAdjustInteractPosType {
    ESBAdjustInteractPosType_None,
    ESBAdjustInteractPosType_TargetRange,
    ESBAdjustInteractPosType_TargetRangeForce,
    ESBAdjustInteractPosType_AxisX,
    ESBAdjustInteractPosType_AxisY,
    ESBAdjustInteractPosType_AxisZ,
};

