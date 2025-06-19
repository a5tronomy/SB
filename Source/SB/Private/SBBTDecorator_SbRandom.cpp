#include "SBBTDecorator_SbRandom.h"

USBBTDecorator_SbRandom::USBBTDecorator_SbRandom() {
    this->NodeName = TEXT("SB_Random");
    this->RandomRange = 0;
    this->CheckValue = 0;
    this->CompareOP = ESBCompare::Equal;
}


