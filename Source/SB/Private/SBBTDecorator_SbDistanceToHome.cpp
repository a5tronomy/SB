#include "SBBTDecorator_SbDistanceToHome.h"

USBBTDecorator_SbDistanceToHome::USBBTDecorator_SbDistanceToHome() {
    this->NodeName = TEXT("SB_DistanceToHome");
    this->Distance = 0.00f;
    this->CompareOP = ESBCompare::Equal;
}


