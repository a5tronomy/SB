#include "SBShowControlCameraVolumeKey.h"

USBShowControlCameraVolumeKey::USBShowControlCameraVolumeKey() {
    this->bPlayerCharacterOnly = false;
    this->Priority = 0.00f;
    this->AddOffsetYCurve = NULL;
    this->AddOffsetXCurve = NULL;
    this->AddFovCurve = NULL;
    this->YawToPivotCurve = NULL;
    this->PitchToPivotCurve = NULL;
    this->InitialTime = 0.00f;
    this->bHoldDuration = false;
    this->HoldDuration = 0.00f;
    this->bEnableOverrideSameValue = false;
    this->DelayStartDuration = 0.00f;
}


