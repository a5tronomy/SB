#include "SBLaserUserData.h"

USBLaserUserData::USBLaserUserData() {
    this->bBounce = true;
    this->BounceType = ESBLaserBounceType_AngleOfIncidence;
    this->FixDirectionPitch = 0.00f;
    this->FixDirectionYaw = 0.00f;
    this->FixDirectionRoll = 0.00f;
}


