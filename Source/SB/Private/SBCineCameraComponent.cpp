#include "SBCineCameraComponent.h"

USBCineCameraComponent::USBCineCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilmbackPresets.AddDefaulted(13);
    this->LensPresets.AddDefaulted(9);
    this->CameraActorBoundsComponent = NULL;
    this->bForceDelayUpdate = false;
}


