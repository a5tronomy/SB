#include "SBShowControlCamLagSpeedKey.h"

USBShowControlCamLagSpeedKey::USBShowControlCamLagSpeedKey() {
    this->bPlayerCharacterOnly = false;
    this->TargetSpeed = 0.00f;
    this->TargetMaxDistance = 0.00f;
    this->TargetLockOnCameraBlendScale = 1.00f;
    this->BlendSpeed = 1.00f;
    this->BlendOutDuration = 1.00f;
    this->Priority = 0.00f;
    this->PlayTarget = ShowControlLagSpeedTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->bApplyToLockOnCameraPitch = false;
}


