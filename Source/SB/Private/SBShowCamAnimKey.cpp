#include "SBShowCamAnimKey.h"

USBShowCamAnimKey::USBShowCamAnimKey() {
    this->BlendInTime = 0.15f;
    this->BlendOutTime = 0.15f;
    this->bPlayToMainCharacter = true;
    this->PlayTargetIndex = 0;
    this->CheckTarget = ShowCamAnimCheckTarget_MainActor;
    this->bPlayerCharacterOnlyByCheckTarget = false;
    this->bUseAttachCharacterToCameraAnim = false;
    this->bUseManualFocalTarget = false;
    this->ManualFocalTargetIndex = 0;
    this->ManualFocalTarget = ShowCamAnimCheckTarget_MainActor;
    this->ManualFocalStartTime = 0.00f;
    this->ManualFocalDuration = -1.00f;
    this->ManualFocalFStop = 1.00f;
    this->bPlayBasedCustomAnim = false;
    this->bUseMatineeCameraAnim = false;
    this->MatineeCameraAnim = NULL;
    this->MatineeCameraAnimPriority = 100;
    this->MatineeCameraAnimScale = 1.00f;
    this->bUseMoveLinkLastPosition = false;
    this->bUpdatePlayBaseOriginZInTick = false;
    this->bUpdatePlayBaseOriginZInTickByMainCharacter = false;
    this->bUseAttachCharacterFirstRotation = false;
    this->OverrideInitialFOV = 0.00f;
    this->TargetIndexPlayBaseOriginZInTick = 0;
    this->bUseRuleMoveLastRotation = false;
    this->bResetCamFromCamAnimAtFinished = true;
    this->bResetCamAtUnlockPitch = false;
    this->ResetCamAtUnlockPitchValue = 0.50f;
    this->bUseCharacterUECamScale = false;
    this->bCharacterUECamToMainCharacter = false;
    this->CharacterUECamTargetIndex = 0;
    this->bUseCharacterUECamExtraAnim = false;
    this->FovCurve = NULL;
    this->bStopTPSView = true;
    this->bBlcokControllerInput = true;
}


