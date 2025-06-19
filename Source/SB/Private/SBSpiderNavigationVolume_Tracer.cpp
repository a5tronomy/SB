#include "SBSpiderNavigationVolume_Tracer.h"
#include "Components/SphereComponent.h"

ASBSpiderNavigationVolume_Tracer::ASBSpiderNavigationVolume_Tracer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
}


