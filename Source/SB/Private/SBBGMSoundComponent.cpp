#include "SBBGMSoundComponent.h"

USBBGMSoundComponent::USBBGMSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->ChangedPeaceDelay = 0.00f;
    this->BGMTrack = NULL;
    this->AttachActor = NULL;
}


