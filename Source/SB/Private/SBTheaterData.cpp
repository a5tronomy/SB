#include "SBTheaterData.h"

USBTheaterData::USBTheaterData() {
    this->Version = 2;
    this->Priority = 0;
    this->bAllowDuplicatePlay = true;
    this->bRandomTakeStart = false;
    this->bUseRegionFunc_JP = false;
    this->bUseTransitTake = false;
    this->bUseTransitTakeCommonSet = true;
    this->TransitTakeData = NULL;
    this->RootTakeUID = 1;
}


