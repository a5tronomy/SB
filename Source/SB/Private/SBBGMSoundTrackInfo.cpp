#include "SBBGMSoundTrackInfo.h"

FSBBGMSoundTrackInfo::FSBBGMSoundTrackInfo() {
    this->SoundCue = NULL;
    this->BPM = 0.00f;
    this->StartDependencyBPM = false;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->PlayDelay = 0.00f;
    this->StopDelay = 0.00f;
}

