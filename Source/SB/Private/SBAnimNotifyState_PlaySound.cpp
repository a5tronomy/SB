#include "SBAnimNotifyState_PlaySound.h"

USBAnimNotifyState_PlaySound::USBAnimNotifyState_PlaySound() {
    this->Sound = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->FadeOutDuration = 0.00f;
    this->bFollow = false;
    this->SoundClassOverride = NULL;
    this->AttenuationOverride = NULL;
}


