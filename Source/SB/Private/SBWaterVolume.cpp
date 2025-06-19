#include "SBWaterVolume.h"

ASBWaterVolume::ASBWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bWaterVolume = true;
    this->WaterPlaneActor = NULL;
    this->Type = SBWater_Normal;
}


