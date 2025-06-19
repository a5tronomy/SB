#include "SBEventMoveData.h"

USBEventMoveData::USBEventMoveData() {
    this->StartTransitDuration = 0.50f;
    this->EndTransitDuration = 0.50f;
    this->MiddleTransitDuration = 0.30f;
    this->bMovingUnitBySideToSide = false;
    this->MoveUnitAnimSequenceRepeatNum = -1;
    this->MoveUnitSize = 40.00f;
    this->MoveFastUnitSize = 120.00f;
    this->bUseMoveForwardVectorFromTargetPoint = false;
    this->MoveForwardApplyValue = 1.00f;
    this->MoveRightApplyValue = 0.00f;
    this->bUseSphereRadiusCheck = false;
    this->BaseMoveAxis = 0;
    this->bUseVolumeAxisForMove = false;
    this->MovingArmLength = 96.00f;
    this->EventMoveType = SBEventMove_SideToSide;
    this->RodMoveDamping = 0.35f;
    this->RodMoveSwingSpeed = 250.00f;
    this->RodMoveFrontJumpDegree = 45.00f;
    this->RodMoveBackJumpDegree = 45.00f;
    this->RodMoveBackJumpLength = 800.00f;
    this->RodMoveFallLength = 200.00f;
    this->bEnableSideRodUpJump = false;
    this->bDisableSideRodJumpLanding = false;
    this->bEnableSideRodDownAttach = false;
    this->MaxMoveSpeed = 500.00f;
    this->JumpLength = 1300.00f;
    this->bApplyGravity = false;
    this->ApplyGravityMoveTime = 1.00f;
    this->GravityAccelSpeedForSec = 200.00f;
    this->GravitiedMaxMoveSpeed = 700.00f;
    this->SlidingSpeedCurve = NULL;
    this->bEnableSliding = true;
    this->EnableCancelJumpDirDegToCharDir = 30.00f;
    this->CancelJumpXYPower = 600.00f;
    this->CableLeaveDistance = 0.00f;
    this->BlockTimeAfterEventMove = 0.00f;
    this->InteractionDegree = 90.00f;
    this->bIsEnableKneeIK = false;
    this->KneeIK_SearchDistance_Forward_R = 20.00f;
    this->KneeIK_SearchDistance_Backward_R = -20.00f;
    this->KneeIK_SearchDistance_Forward_L = 20.00f;
    this->KneeIK_SearchDistance_Backward_L = -20.00f;
    this->MoveOffset_R_Knee = -5.00f;
    this->MoveOffset_L_Knee = -5.00f;
    this->MoveOffset_R_Toe = -5.00f;
    this->MoveOffset_L_Toe = -5.00f;
    this->StartLeaveDuration = 0.50f;
    this->EndLeaveDuration = 0.50f;
    this->MoveTurnAnimDuration = 0.00f;
    this->bIgnoreEventMoveIK = false;
    this->bBlockFBMoveInputDirAtFirst = false;
    this->BalanceMovingSplineAreaRadius = 0.00f;
    this->BalanceMovingIgnoreDistanceAtStart = 0.00f;
    this->BalanceMovingIgnoreDistanceAtEnd = 0.00f;
    this->BalanceBeamMoveInputForwardDegree = 0.00f;
    this->BalanceMovingHoldStartFallDistance = 3000.00f;
    this->bDisableHoldBalanceBeam = false;
    this->bSaveActorStorage = false;
    this->bKeepEventMoveWhenDead = false;
}


