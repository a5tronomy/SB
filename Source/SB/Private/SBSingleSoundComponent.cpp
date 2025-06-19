#include "SBSingleSoundComponent.h"

USBSingleSoundComponent::USBSingleSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SingleSoundData = NULL;
    this->VolumeMultiplier = 1.00f;
    this->AttenuationSettings = NULL;
}

bool USBSingleSoundComponent::IsPlaying() const {
    return false;
}

bool USBSingleSoundComponent::IsActiveSingleSound() const {
    return false;
}

void USBSingleSoundComponent::ChangeSound(USoundBase* Sound, float FadeInTime, float FadeOutTime, bool bForceSync) {
}

void USBSingleSoundComponent::AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings) {
}


