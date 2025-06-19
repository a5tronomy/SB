#include "SBCharMovingStanceVolume.h"

ASBCharMovingStanceVolume::ASBCharMovingStanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bActiveVolume = true;
    this->ForceType = SBMovingStance_None;
    this->bManualForceCenter = false;
    this->ForceRadius = 100.00f;
    this->bEffectInMinRadius = false;
    this->bActiveEffectInVolume = false;
    this->ForceMinRadius = 0.00f;
    this->InitialForce = 0.00f;
    this->ForceDeltaForSec = 300.00f;
    this->MaxForce = 3000.00f;
    this->MoveMaxSpeedCurveAtDuration = NULL;
    this->bForceOnlyXY = false;
    this->bApplyForceAtCharacterPhysWalking = true;
    this->bApplyForceAtCharacterPhysFalling = false;
    this->bApplyForceAtCharacterPhysSwimming = false;
    this->bUseMoveSpeedScaleCurve = false;
    this->MoveSpeedScaleCurve = NULL;
    this->MoveSpeedScaleBetweenBaseRot = NULL;
    this->ContorlMoveSpeedInnerVolume = NULL;
    this->bUseContorlMoveSpeedInnerVolume = false;
    this->bBlockSkill = false;
    this->bBlockJump = false;
    this->bBlockSprint = false;
    this->bBlockMoveInput = false;
    this->bForceWalkingMode = false;
    this->NormalAnimRangeDegree = 50.00f;
    this->bUseMoveStruggleAnim = false;
    this->bBlockMoveTransitAnimAtSturggle = false;
    this->MoveStruggleInDegreeForceToVelocity = 15.00f;
    this->bApplySpeedForIdleAnim = false;
    this->ApplySpeedForIdleAnimScale = 1.00f;
    this->ApplySpeedForIdleAnimDegree = 22.50f;
    this->bUseShotMoveToIdleDuration = false;
    this->ShotMoveToIdleDuration = -1.00f;
}


