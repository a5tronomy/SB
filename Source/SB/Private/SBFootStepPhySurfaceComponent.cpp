#include "SBFootStepPhySurfaceComponent.h"

USBFootStepPhySurfaceComponent::USBFootStepPhySurfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCreatePhysicsState = true;
    this->CanCharacterStepUpOn = ECB_No;
    this->OverrideFootStepPhySurface = SurfaceType_Max;
    this->Priority = 0.00f;
    this->VolumeDetailMode = DM_Low;
}


