#pragma once
#include "CoreMinimal.h"
#include "ESBMovementTargetRelativeAxisType.generated.h"

UENUM()
enum ESBMovementTargetRelativeAxisType {
    MovementTargetRelativeAxisType_World,
    MovementTargetRelativeAxisType_ParentAxis,
    MovementTargetRelativeAxisType_RootAxis,
    MovementTargetRelativeAxisType_InputDirection,
};

