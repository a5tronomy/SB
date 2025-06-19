#include "SBCharacterOccluderActor.h"
#include "Components/BoxComponent.h"

ASBCharacterOccluderActor::ASBCharacterOccluderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->bCheckEncompassesPlayer = false;
    this->bRealtime = false;
    this->bActiveOccluder = true;
    this->bKeepCharacterMovementTick = false;
}


