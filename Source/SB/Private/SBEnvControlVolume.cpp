#include "SBEnvControlVolume.h"

ASBEnvControlVolume::ASBEnvControlVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->EnvSettingData = NULL;
    this->bActiveVolume = true;
    this->Priority = 0.00f;
    this->BlendRadius = 1000.00f;
    this->bIsUnbound = false;
    this->bActiveParticleAttachToCamera = false;
    this->bEnableWaterSingleLayer = true;
    this->ReactiveMaskBaseCustomBiasScale = 0.40f;
    this->ReactiveMaskBaseCustomVelocityFactor = 10.00f;
    this->OverrideControlSettingWeight = 1.00f;
}

void ASBEnvControlVolume::RefreshProperty() {
}


