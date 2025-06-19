#include "SBCineCameraSplineComponent.h"
#include "SBCineCameraSplineMetadata.h"

USBCineCameraSplineComponent::USBCineCameraSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineMetadata = CreateDefaultSubobject<USBCineCameraSplineMetadata>(TEXT("SBCineCameraSplineMetadata"));
}


