#include "SBToolDataNode_GuideAction.h"

USBToolDataNode_GuideAction::USBToolDataNode_GuideAction() {
    this->ID = 0;
    this->bFixedTargetRotation = false;
    this->bPlayerAggroCheck = false;
    this->bPlayerMoveControl = false;
    this->PlayerMoveAreaLimitDistance = 0.00f;
    this->PlayerRunLimitDistance = 0.00f;
    this->PlayerSprintLimitDistance = 0.00f;
    this->MoveDelayTime = 0.00f;
    this->bMoveStateControlByPlayer = false;
    this->MoveStateFromForwardPlayer = MoveState_None;
    this->MinDistanceFromForwardPlayer = 0.00f;
    this->MaxDistanceFromForwardPlayer = 0.00f;
    this->MoveStateFromBackwardPlayer = MoveState_None;
    this->MinDistanceFromBackwardPlayer = 0.00f;
    this->MaxDistanceFromBackwardPlayer = 0.00f;
    this->StopDistanceToPlayer = 0.00f;
    this->MovePauseDistanceToPlayer = 0.00f;
    this->MoveResumeDistanceToPlayer = 0.00f;
    this->bMovePauseLookAtPlayer = false;
    this->bLoopMovePauseShow = false;
    this->ArriveShowDelayTime = 0.00f;
    this->StartShowDelayTime = 0.00f;
    this->bLoopArriveShow = false;
    this->bLookAtPlayerWhenArrive = false;
    this->OverrideMaxSpeed = 0.00f;
    this->bCompleteLookAtPlayer = false;
    this->CompleteWaitTime = 0.00f;
    this->bUsePathfinding = false;
    this->CompletedTimerWhenArrive = 0.00f;
    this->CompletedDistanceToPlayerWhenArrive = 0.00f;
    this->bFly = false;
    this->FlyMoveSpeedPow = 0.00f;
    this->bDisableDroneUIIndicator = false;
}


