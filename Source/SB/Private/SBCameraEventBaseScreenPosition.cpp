#include "SBCameraEventBaseScreenPosition.h"

FSBCameraEventBaseScreenPosition::FSBCameraEventBaseScreenPosition() {
    this->AddOffsetYCurve = NULL;
    this->AddOffsetXCurve = NULL;
    this->AddFovCurve = NULL;
    this->YawToPivotCurve = NULL;
    this->PitchToPivotCurve = NULL;
    this->Duration = 0.00f;
    this->CurrentDuration = 0.00f;
    this->bHoldDuration = false;
    this->HoldDuration = 0.00f;
    this->bInverse = false;
}

