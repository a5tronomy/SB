#pragma once
#include "CoreMinimal.h"
#include "ESBMovePositionType.generated.h"

UENUM()
enum ESBMovePositionType {
    MovePositionType_Self,
    MovePositionType_Target,
    MovePositionType_Saved,
    MovePositionType_InsideTargetOrSelf,
    MovePositionType_TargetSocket,
    MovePositionType_WorldPosition,
};

