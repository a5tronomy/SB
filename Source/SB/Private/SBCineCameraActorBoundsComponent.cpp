#include "SBCineCameraActorBoundsComponent.h"

USBCineCameraActorBoundsComponent::USBCineCameraActorBoundsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewDefaultRadius = 100.00f;
    this->TemplateActorBoneData = NULL;
    this->bNotOverrideUseViewTarget = true;
    this->EasingFunc = EEasingFunc::Linear;
    this->EasingAlpha = 0.30f;
    this->bUseMotionBlurAmountZero = false;
}


