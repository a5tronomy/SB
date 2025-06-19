#include "SBCharacterMoveInfo.h"

FSBCharacterMoveInfo::FSBCharacterMoveInfo() {
    this->NewMovementMode = MOVE_None;
    this->NewCustomMode = 0;
    this->LastMoveType = ESBCharacterMoveType_None;
    this->bWalkingFlag = false;
    this->bWalkingWhenMoving = false;
    this->bJoggingRun = false;
    this->bSprintFlag = false;
    this->bFlyingActionFlag = false;
    this->bJumpFlag = false;
    this->RemainMoveAnimSpeedInterpolAfterAction = 0.00f;
    this->LastMoveFowardInput = 0.00f;
    this->LastMoveRightInput = 0.00f;
    this->BroadcastMoveType = ESBBroadcastMoveType_None;
    this->BroadcastMoveParam = 0;
}

