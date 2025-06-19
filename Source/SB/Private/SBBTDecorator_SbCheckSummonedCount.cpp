#include "SBBTDecorator_SbCheckSummonedCount.h"

USBBTDecorator_SbCheckSummonedCount::USBBTDecorator_SbCheckSummonedCount() {
    this->NodeName = TEXT("SB_CheckSummonedCount");
    this->MinionCount = 0;
    this->CompareOP = ESBCompare::Equal;
}


