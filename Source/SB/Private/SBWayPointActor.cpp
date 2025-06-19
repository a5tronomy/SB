#include "SBWayPointActor.h"

ASBWayPointActor::ASBWayPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveState = MoveState_Walk;
    this->ReturnMoveState = MoveState_Walk;
    this->InterpType = ESBInterp_Linear;
    this->EntryType = ESBEntry_StartPoint;
    this->AmplitudePerAngle = 0.00f;
    this->SinCircleCount = 1;
    this->bRepeat = false;
    this->bCheckObstacle = false;
    this->bRetryOffPath = false;
    this->bDisableBlockDetectionState = false;
    this->CancelPausePendingDuration = 0.00f;
    this->MinRoundRange = 0.00f;
    this->MaxRoundRange = 0.00f;
    this->DestinationMinDelayTime = 0.00f;
    this->DestinationMaxDelayTime = 0.00f;
    this->NearEntryDestinationLength = 300.00f;
    this->SplineComponent = NULL;
    this->TurnDegree = 0.00f;
    this->BeginTurnDelayTime = 0.00f;
    this->EndTurnDelayTime = 0.00f;
    this->TurnType = ESBWayPointTurn_None;
    this->PathWayAdjustDirRadius = 60.00f;
    this->PathWayAdjustDirByObjectRadiusMax = 35.00f;
    this->PathWayAdjustDirByObjectRadiusMin = 1.00f;
    this->PathWayAdjustDirInterpSpeed_Walk = 1.00f;
    this->PathWayAdjustDirInterpSpeed_Run = 40.00f;
    this->PathWayOutPathPointDistance = 350.00f;
    this->PreWayPoint = NULL;
    this->NextWayPoint = NULL;
    this->Distance = 0.00f;
    this->bWarpToStartPoint = false;
    this->bApplyBezierCurve = true;
    this->bMoveToStartCheckNearBy = false;
    this->bApplyRotationAtSequence = false;
}


