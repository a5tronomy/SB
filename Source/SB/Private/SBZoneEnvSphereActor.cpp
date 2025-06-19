#include "SBZoneEnvSphereActor.h"
#include "Components/SphereComponent.h"

ASBZoneEnvSphereActor::ASBZoneEnvSphereActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("ZoneEnvRoot"))) {
    this->ZoneEnvRoot = (USphereComponent*)RootComponent;
}


