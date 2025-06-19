#include "SBBTDecorator_SbCheckActorState.h"

USBBTDecorator_SbCheckActorState::USBBTDecorator_SbCheckActorState() {
    this->NodeName = TEXT("SB_CheckActorState");
    this->ActorType = ESBAIActorType::Self;
    this->CheckState = ActorState_None;
}


