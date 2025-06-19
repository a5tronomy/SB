#include "SBDestructibleActor.h"
#include "SBDestructibleComponent.h"

ASBDestructibleActor::ASBDestructibleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBDestructibleComponent>(TEXT("SBDestructibleComponent"));
    this->DestructibleComponent = (USBDestructibleComponent*)RootComponent;
}


