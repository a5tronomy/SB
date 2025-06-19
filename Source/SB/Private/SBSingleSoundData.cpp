#include "SBSingleSoundData.h"

USBSingleSoundData::USBSingleSoundData() {
    this->SoundWave = NULL;
    this->TransitType = ESBSingleSoundTransitType::FadeInOut;
    this->FadeInTime = 0.50f;
    this->FadeOutTime = 0.50f;
    this->FadeOutDelayTime = 0.20f;
    this->bKeepPlayingWhenLoading = false;
    this->bBGMEventResetWhenGameExit = false;
    this->OverrideSound = NULL;
}


