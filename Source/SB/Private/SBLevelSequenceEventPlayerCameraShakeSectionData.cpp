#include "SBLevelSequenceEventPlayerCameraShakeSectionData.h"

FSBLevelSequenceEventPlayerCameraShakeSectionData::FSBLevelSequenceEventPlayerCameraShakeSectionData() {
    this->ShakeClass = NULL;
    this->ShakeInnerRadius = 0.00f;
    this->ShakeOuterRadius = 0.00f;
    this->ShakeFallOff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
    this->ShakeScale = 0.00f;
    this->bCheckCameraVolume = false;
}

