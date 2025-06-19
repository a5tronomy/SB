#include "SBDroneLocationData.h"

USBDroneLocationData::USBDroneLocationData() {
    this->LocationRadius = 0.00f;
    this->CurrentLocationPoint = 0;
    this->BlockingObjectPoint = 0;
    this->BlockingDronePoint = 0;
    this->LastSafetyLocationPointWhenNonBlock = 0;
}


