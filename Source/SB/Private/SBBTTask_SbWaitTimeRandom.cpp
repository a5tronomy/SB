#include "SBBTTask_SbWaitTimeRandom.h"

USBBTTask_SbWaitTimeRandom::USBBTTask_SbWaitTimeRandom() {
    this->NodeName = TEXT("SB_WaitTimeRandom");
    this->MinTime = 0.00f;
    this->MaxTime = 0.00f;
    this->bReturnSucceeded = false;
}


