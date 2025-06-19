#include "SBCharMovingStanceData.h"

FSBCharMovingStanceData::FSBCharMovingStanceData() {
    this->ForceType = SBMovingStance_None;
    this->bManualForceCenter = false;
    this->ForceRadius = 0.00f;
    this->bEffectInMinRadius = false;
    this->bActiveEffectInVolume = false;
    this->ForceMinRadius = 0.00f;
    this->InitialForce = 0.00f;
    this->ForceDeltaForSec = 0.00f;
    this->MaxForce = 0.00f;
    this->MoveMaxSpeedCurveAtDuration = NULL;
    this->bForceOnlyXY = false;
    this->bApplyForceAtCharacterPhysWalking = false;
    this->bApplyForceAtCharacterPhysFalling = false;
    this->bApplyForceAtCharacterPhysSwimming = false;
    this->bUseMoveSpeedScaleCurve = false;
    this->MoveSpeedScaleCurve = NULL;
    this->MoveSpeedScaleBetweenBaseRot = NULL;
    this->bBlockSkill = false;
    this->bBlockJump = false;
    this->bBlockSprint = false;
    this->bBlockMoveInput = false;
    this->bForceWalkingMode = false;
    this->NormalAnimRangeDegree = 0.00f;
    this->bUseMoveStruggleAnim = false;
    this->bBlockMoveTransitAnimAtSturggle = false;
    this->MoveStruggleInDegreeForceToVelocity = 0.00f;
    this->bApplySpeedForIdleAnim = false;
    this->ApplySpeedForIdleAnimScale = 0.00f;
    this->ApplySpeedForIdleAnimDegree = 0.00f;
    this->bUseShotMoveToIdleDuration = false;
    this->ShotMoveToIdleDuration = 0.00f;
}

