#include "SBSoundInfo.h"

FSBSoundInfo::FSBSoundInfo() {
    this->SoundSource = NULL;
    this->VolumeMultiplier = 0.00f;
    this->PtichMultiplier = 0.00f;
    this->SoundClassOverride = NULL;
    this->AttenuationOverride = NULL;
    this->VibrationSet = NULL;
    this->bPlayFacialAnim = false;
    this->bAbsoluteResourcePath = false;
    this->PlayRate = 0.00f;
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = 0.00f;
    this->PlayBlendInTime = 0.00f;
    this->PlayBlendOutTime = 0.00f;
    this->Priority = 0;
    this->bIgnoreStopAnimationWhenEnd = false;
}

