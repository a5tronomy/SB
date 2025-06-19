#include "SBBGMSoundVolume.h"

ASBBGMSoundVolume::ASBBGMSoundVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bActiveVolume = true;
    this->Priority = 0.00f;
    this->ChangedPeaceDelay = 0.00f;
    this->BGMTrack = NULL;
}


