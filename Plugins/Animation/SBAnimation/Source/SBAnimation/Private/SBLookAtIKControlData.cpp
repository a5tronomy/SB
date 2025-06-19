#include "SBLookAtIKControlData.h"

FSBLookAtIKControlData::FSBLookAtIKControlData() {
    this->Weight = 0.00f;
    this->StartYawValue = 0.00f;
    this->StartPitchValue = 0.00f;
    this->LookAtClampYaw = 0.00f;
    this->LookAtClampPitchUp = 0.00f;
    this->LookAtClampPitchDown = 0.00f;
    this->StopPitchWhenGreaterYaw = 0.00f;
    this->StopLookAtWhenGreaterYaw = 0.00f;
}

