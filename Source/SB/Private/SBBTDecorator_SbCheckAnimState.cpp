#include "SBBTDecorator_SbCheckAnimState.h"

USBBTDecorator_SbCheckAnimState::USBBTDecorator_SbCheckAnimState() {
    this->NodeName = TEXT("SB_CheckAnimState");
    this->ActorType = ESBAIActorType::Self;
    this->AnimState = ESBAnimState::Walk;
}


