#pragma once
#include "CoreMinimal.h"
#include "ESBMoveState.generated.h"

UENUM()
enum ESBMoveState {
    MoveState_None,
    MoveState_Walk,
    MoveState_Run,
    MoveState_Sprint,
    MoveState_Spider,
    MoveState_Fly,
    MoveState_Jog,
};

