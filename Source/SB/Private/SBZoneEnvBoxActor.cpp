#include "SBZoneEnvBoxActor.h"
#include "Components/BoxComponent.h"

ASBZoneEnvBoxActor::ASBZoneEnvBoxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("ZoneEnvRoot"))) {
    this->ZoneEnvRoot = (UBoxComponent*)RootComponent;
}


