#include "SBBTDecorator_SbCheckStance.h"

USBBTDecorator_SbCheckStance::USBBTDecorator_SbCheckStance() {
    this->NodeName = TEXT("SB_CheckStance");
    this->ActorType = ESBAIActorType::Self;
    this->CompareType = SBCheckStanceCompareType_OR;
}


