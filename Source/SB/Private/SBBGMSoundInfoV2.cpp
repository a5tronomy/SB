#include "SBBGMSoundInfoV2.h"

FSBBGMSoundInfoV2::FSBBGMSoundInfoV2() {
    this->SoundBase = NULL;
    this->Volume = 0.00f;
    this->FadeIn = 0.00f;
    this->FadeOut = 0.00f;
    this->BPM = 0.00f;
    this->PlayMetronomeForDebug = false;
    this->PauseWhenOpenGameMenu = false;
}

