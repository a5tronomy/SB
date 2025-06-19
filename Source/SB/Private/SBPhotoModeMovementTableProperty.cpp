#include "SBPhotoModeMovementTableProperty.h"

FSBPhotoModeMovementTableProperty::FSBPhotoModeMovementTableProperty() {
    this->ID = 0;
    this->InputDirection = ESBPhotoModeInputDirection_None;
    this->CameraType = ESBPhotoModeCameraType_None;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->bAffectedByFOV = false;
    this->FOVScaleMin = 0.00f;
    this->FOVScaleMax = 0.00f;
}

