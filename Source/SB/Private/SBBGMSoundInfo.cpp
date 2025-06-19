#include "SBBGMSoundInfo.h"

FSBBGMSoundInfo::FSBBGMSoundInfo() {
    this->SoundCue = NULL;
    this->PlayDelayTime = 0.00f;
    this->UseQuartzSystem = false;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->RestartType = ESBSoundRestartType::Default;
    this->StopDelayTime = 0.00f;
    this->BPM = 0.00f;
    this->QuartzClockEventBoundary = EQuartzCommandQuantization::Bar;
    this->StopDelayBeat = 0;
    this->PlayMetronomeForDebug = false;
}

