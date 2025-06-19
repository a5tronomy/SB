#include "SBAmbientSoundVolume.h"

ASBAmbientSoundVolume::ASBAmbientSoundVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bActiveVolume = true;
    this->Channel = 0;
    this->Priority = 0.00f;
    this->Sound = NULL;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->Volume = 1.00f;
    this->LPFFrequency = 20000.00f;
}


