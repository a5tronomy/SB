#include "SBBGMFinishSoundInfo.h"

FSBBGMFinishSoundInfo::FSBBGMFinishSoundInfo() {
    this->SoundBase = NULL;
    this->BGMStateCondition = ESBBGMFinishSoundCondition::Battle;
    this->KeepTheBeatByQuartz = false;
    this->ForceFadeOutCheck = false;
    this->ForceFadeOutTime = 0.00f;
}

