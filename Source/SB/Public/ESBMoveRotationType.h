#pragma once
#include "CoreMinimal.h"
#include "ESBMoveRotationType.generated.h"

UENUM()
enum ESBMoveRotationType {
    MoveRotationType_None,
    MoveRotationType_Target,
    MoveRotationType_Target_TimeBase,
    MoveRotationType_Target_FirstPosition,
    MoveRotationType_InputDirection,
    MoveRotationType_Saved,
    MoveRotationType_LocalAxis,
    MoveRotationType_4Directions,
    MoveRotationType_4DirectionsAndIgnoreFront,
    MoveRotationType_MoveDirection,
    MoveRotationType_MoveInverseDirection,
    MoveRotationType_SafeAreaCheckWhenLinkFrom,
    MoveRotationType_LinkTo,
    MoveRotationType_WorldAxis,
};

