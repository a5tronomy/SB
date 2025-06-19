#include "SBCineDialogueCameraActor.h"
#include "SBCineCameraActorBoundsComponent.h"
#include "SBCineCameraComponent.h"

ASBCineDialogueCameraActor::ASBCineDialogueCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBCineCameraComponent>(TEXT("CameraComponent"))) {
    this->CameraActorBoundsComponent = CreateDefaultSubobject<USBCineCameraActorBoundsComponent>(TEXT("SBCineCameraActorBounds"));
    this->SBCineCameraComponent = (USBCineCameraComponent*)CameraComponent;
    this->CameraComponent->SetupAttachment(RootComponent);
    this->SBCineCameraComponent->SetupAttachment(RootComponent);
}


