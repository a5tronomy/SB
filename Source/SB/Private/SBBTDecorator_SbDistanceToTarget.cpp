#include "SBBTDecorator_SbDistanceToTarget.h"

USBBTDecorator_SbDistanceToTarget::USBBTDecorator_SbDistanceToTarget() {
    this->NodeName = TEXT("SB_DistanceToTarget");
    this->Distance = 0.00f;
    this->CompareOP = ESBCompare::Equal;
    this->bSubTarget = false;
}


