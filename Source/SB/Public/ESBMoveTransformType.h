#pragma once
#include "CoreMinimal.h"
#include "ESBMoveTransformType.generated.h"

UENUM()
enum ESBMoveTransformType {
    MoveTransformType_None,
    MoveTransformType_Static,
    MoveTransformType_LinkTo,
    MoveTransformType_LinkTo_Velocity,
    MoveTransformType_LinkFrom,
    MoveTransformType_ZeroVelocity,
    MoveTransformType_LocalAxis,
    MoveTransformType_Airborne,
    MoveTransformType_Fly,
    MoveTransformType_Fall,
    MoveTransformType_RootMotion,
    MoveTransformType_WorldLocation,
    MoveTransformType_TargetAround,
    MoveTransformType_PathWay,
    MoveTransformType_SwimmingDash,
};

