#include "SBCameraVolume.h"

ASBCameraVolume::ASBCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveActorStorage = true;
    this->bColored = true;
    this->bActiveVolume = true;
    this->Priority = 0.00f;
    this->bNotDetachWhenLeaveVolume = false;
    this->TargetCameraActor = NULL;
    this->bUsePlayerMoveDirFromCam = true;
    this->AttachBlendFunc = VTBlend_Linear;
    this->AttachBlendTime = 0.00f;
    this->DetachBlendFunc = VTBlend_Linear;
    this->DetachBlendTime = 0.00f;
    this->bLookAtTargetCamMode = false;
    this->pLookAtTargetActor = NULL;
    this->LookAtTargetDistance = 300.00f;
    this->LookAtTargetEnableActiveCount = -1;
    this->DeactiveCameraVolumeCameraResetMode = 0;
    this->DeactiveCameraVolumeCameraResetAlpha = 0.50f;
    this->DeactiveCameraVolumeCameraResetYawInDegree = 90.00f;
    this->RemainLookAtTargetEnableActiveCount = -1;
    this->LookAtStartInDegree = 60.00f;
    this->LookAtBlendSpeedScale = 1.00f;
    this->LookAtBlendInDuration = 0.00f;
    this->ChangeDirectionInputSize = 0.30f;
    this->bUseCancelByUserCamControl = true;
    this->CancelByUserCamControlTime = 1.00f;
    this->LookAtMaxSpeedScale = 1.00f;
    this->LookAtControlCamSpeedScale = 1.00f;
    this->LookAtControlForceWalkMode = false;
    this->LookAtControlDisableJump = false;
    this->LookAtControlBlockSkill = false;
    this->ForceWalkModeInVolume = false;
    this->DisableSprintInVolume = false;
    this->DisableJumpInVolume = false;
    this->BlockSkillInVolume = false;
    this->BlockEventMoveLeave = false;
    this->bUseMoveConstraint = false;
    this->bMoveConstraintDirXYOnly = true;
    this->MoveConstraintForwardFactor = NULL;
    this->MoveConstraintRightFactor = NULL;
    this->MoveConstraintDirectionType = ESBCameraVoumeMoveConstraintDirectionType_Vector;
    this->MoveConstraintDirectionEnd = NULL;
    this->MoveConstraintDirectionStart = NULL;
    this->MoveConstraintRightDotCalcuate = true;
    this->MoveConstraintEveryUpdate = true;
    this->visibleMoveConstraintDirectionVector = true;
    this->visibleMoveConstraintDirectionStart = false;
    this->visibleMoveConstraintDirectionEnd = false;
    this->bUseJumpConstraint = false;
    this->JumpConstraintMaxJump = 500.00f;
    this->JumpConstraintMaxXY = 1000.00f;
    this->JumpConstraintUnlockJumpFromSplineProgress = 0.00f;
    this->bUsePhysicsConstraint = false;
    this->bIgnoreImpartBaseVelocityX = false;
    this->bIgnoreImpartBaseVelocityY = false;
    this->bIgnoreImpartBaseVelocityZ = false;
    this->EnableTPSFlag = false;
    this->TPS_SwitchableTime = 0.00f;
    this->bControlScreenPositionRatio = false;
    this->PitchAddCurveByScreenPosY = NULL;
    this->YawAddCurveByScreenPosX = NULL;
    this->PositionYAddCurveByScreenPosY = NULL;
    this->PositionXAddCurveByScreenPosX = NULL;
}


