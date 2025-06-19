#pragma once
#include "CoreMinimal.h"
#include "ESBMoveDirectionAxis.generated.h"

UENUM()
enum ESBMoveDirectionAxis {
    MoveDirectionAxis_Self,
    MoveDirectionAxis_Target,
    MoveDirectionAxis_SelfToTarget,
    MoveDirectionAxis_InputDirectionWorld,
    MoveDirectionAxis_InputDirectionLocal,
    MoveDirectionAxis_HitDirection,
    MoveDirectionAxis_Velocity,
    MoveDirectionAxis_Velocity2D,
    MoveDirectionAxis_SelfToTarget2D,
    MoveDirectionAxis_InputDirectionWorldWithoutZ,
};

