#include "SBCharacterMovementCheckInfo.h"

FSBCharacterMovementCheckInfo::FSBCharacterMovementCheckInfo() {
    this->FutureMovingPointEnableHuddleUp[0] = 0;
    this->FutureMovingPointEnableHuddleUp[1] = 0;
    this->FutureMovingPointSlopeDegree[0] = 0.00f;
    this->FutureMovingPointSlopeDegree[1] = 0.00f;
    this->FutureMovingPointDiff[0] = 0.00f;
    this->FutureMovingPointDiff[1] = 0.00f;
    this->FutureCamDirPointSlopeDegree[0] = 0.00f;
    this->FutureCamDirPointSlopeDegree[1] = 0.00f;
    this->CurrentFollowTargetIndex = 0;
    this->NextFollowTargetIndex = 0;
    this->RemainCalcNextFollowTargetIndexSec = 0.00f;
    this->RemainNextTargetMove = 0.00f;
    this->AverageSlopeDegree = 0.00f;
    this->AverageSlopeDegreeAtCamDir = 0.00f;
    this->CameraSlopeMoveType = ESBCameraSlopeMove_None;
    this->bRunCameraSlopeMoveAlpha = false;
    this->CurrentCameraSlopeMoveAlpha = 0.00f;
    this->CurrentCameraSlopeMoveRunningTime = 0.00f;
    this->RemainBlockCameraSlopeMove = 0.00f;
    this->CameraSlopeRunTimeFromStart = 0.00f;
    this->CurrentHistoryFollowCount = 0;
    this->pFollowParticle = NULL;
    this->pFollowSpotLight = NULL;
    this->WorldHeightFromCenter = 0.00f;
    this->WorldHeightFromTargetCharacterForward = 0.00f;
    this->WorldHeightFromTargetCharacterForwardForSprint = 0.00f;
    this->CheckerComponents[0] = NULL;
    this->CheckerComponents[1] = NULL;
    this->CheckerComponents[2] = NULL;
    this->CheckerComponents[3] = NULL;
    this->CheckerComponents[4] = NULL;
    this->CheckerComponents[5] = NULL;
    this->CheckerComponents[6] = NULL;
    this->CheckerComponents[7] = NULL;
    this->CheckerComponents[8] = NULL;
    this->CheckerComponents[9] = NULL;
    this->CheckerComponents[10] = NULL;
    this->CheckerComponents[11] = NULL;
    this->CheckerComponents[12] = NULL;
    this->CheckerComponents[13] = NULL;
    this->CheckerComponents[14] = NULL;
    this->CheckerComponents[15] = NULL;
    this->CheckerComponents[16] = NULL;
    this->CheckerComponents[17] = NULL;
    this->CheckerFutureComponents[0] = NULL;
    this->CheckerFutureComponents[1] = NULL;
    this->bInit = false;
}

