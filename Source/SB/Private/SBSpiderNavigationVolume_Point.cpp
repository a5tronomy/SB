#include "SBSpiderNavigationVolume_Point.h"
#include "Components/SphereComponent.h"

ASBSpiderNavigationVolume_Point::ASBSpiderNavigationVolume_Point(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
}


