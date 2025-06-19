#include "SBShowSoundAdjusterKey.h"

USBShowSoundAdjusterKey::USBShowSoundAdjusterKey() {
    this->SoundVolumeChannel = ESBSoundVolumeChannel::None;
    this->Volume = 1.00f;
    this->bOverrideFadeTime = false;
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
}


