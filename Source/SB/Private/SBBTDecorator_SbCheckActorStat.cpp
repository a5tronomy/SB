#include "SBBTDecorator_SbCheckActorStat.h"

USBBTDecorator_SbCheckActorStat::USBBTDecorator_SbCheckActorStat() {
    this->NodeName = TEXT("SB_CheckActorStat");
    this->ActorType = ESBAIActorType::Self;
    this->CheckStat = ActorStatType_None;
    this->CheckValue = 0.00f;
    this->CompareOP = ESBCompare::Equal;
    this->bRateValue = false;
}


