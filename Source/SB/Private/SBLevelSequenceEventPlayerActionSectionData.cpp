#include "SBLevelSequenceEventPlayerActionSectionData.h"

FSBLevelSequenceEventPlayerActionSectionData::FSBLevelSequenceEventPlayerActionSectionData() {
    this->ActionType = SBLevelSequenceEventPlayerActionType_SetCamaraLock;
    this->bEveryUpdate = false;
    this->RemainMoveAnimSpeedInterpolAfterAction = 0.00f;
    this->bUseFinishMovement = false;
    this->FinishMovement = MOVE_None;
    this->bUseFinishSetPlayerCam = false;
    this->bUseFinishSetPlayerCamReset = false;
    this->FinishSetPlayerCamResetPitchBaseAlpha = false;
    this->FinishSetPlayerCamResetYawReset = false;
    this->FinishSetPlayerCamResetForceSetBoom = false;
    this->bUseFinishStopActiveMovement = false;
    this->bUseDisableCommand = false;
    this->bDisableCommandValue = false;
    this->bUseIgnoreMoveInput = false;
    this->bIgnoreMoveInputValue = false;
    this->bUseIgnoreLockInput = false;
    this->bIgnoreMoveLockValue = false;
    this->bUseJumpLock = false;
    this->bJumpLockReset = false;
    this->bJumpLockValue = false;
    this->bUseForceFoldWeapon = false;
    this->bForceFoldWeaponValue = false;
    this->bUsePlayableLevelSeq = false;
    this->bPlayableLevelSeqValue = false;
    this->bUseChangeMovement = false;
    this->ChangeMovement = MOVE_None;
    this->bUseForceWalk = false;
    this->bUseForceUnLockOn = false;
    this->bUseCameraLock = false;
    this->bCameraLockState = false;
    this->bUpdateVolumeForceMoving = false;
    this->bUpdateVolumeIgnoreTransitAnim = false;
    this->bUseViewTargetPlayerCamReset = false;
    this->ViewTargetPlayerCamResetPitchBaseAlpha = false;
    this->ViewTargetPlayerCamResetYawReset = false;
    this->ViewTargetPlayerCamResetForceSetBoom = false;
    this->ValidLandingLocationZOffset = 0.00f;
    this->bApplyForceLOD = false;
    this->bCreditAllowClose = false;
}

