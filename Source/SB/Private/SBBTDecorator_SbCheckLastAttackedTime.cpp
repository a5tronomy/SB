#include "SBBTDecorator_SbCheckLastAttackedTime.h"

USBBTDecorator_SbCheckLastAttackedTime::USBBTDecorator_SbCheckLastAttackedTime() {
    this->NodeName = TEXT("SB_CheckLastAttackedTime");
    this->ActorType = ESBAIActorType::Self;
    this->CheckTime = 0.00f;
    this->bLess = false;
}


