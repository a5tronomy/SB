#include "SBBTDecorator_SbIsAlive.h"

USBBTDecorator_SbIsAlive::USBBTDecorator_SbIsAlive() {
    this->NodeName = TEXT("SB_IsAlive");
    this->ActorType = ESBAIActorType::Self;
    this->CheckType = ESBBTDecoratorAliveCheckType::Alive;
}


