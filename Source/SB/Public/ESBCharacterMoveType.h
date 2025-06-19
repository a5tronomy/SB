#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterMoveType.generated.h"

UENUM()
enum ESBCharacterMoveType {
    ESBCharacterMoveType_None,
    ESBCharacterMoveType_Normal,
    ESBCharacterMoveType_MoveToIdle,
    ESBCharacterMoveType_Fall,
    ESBCharacterMoveType_FlyingAction,
    ESBCharacterMoveType_LogicRule,
    ESBCharacterMoveType_EventMove,
    ESBCharacterMoveType_SlopeMove,
    ESBCharacterMoveType_Sprint,
    ESBCharacterMoveType_Grab,
};

