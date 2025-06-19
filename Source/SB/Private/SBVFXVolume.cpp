#include "SBVFXVolume.h"

ASBVFXVolume::ASBVFXVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bActiveParticleAttachToCamera = false;
    this->bOverrideEnvControlVolumeParticles = false;
}


