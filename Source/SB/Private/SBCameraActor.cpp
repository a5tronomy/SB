#include "SBCameraActor.h"
#include "SBCameraComponent.h"

ASBCameraActor::ASBCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBCameraComponent>(TEXT("SBCameraComponent"))) {
    this->CameraComponent->SetupAttachment(RootComponent);
}


