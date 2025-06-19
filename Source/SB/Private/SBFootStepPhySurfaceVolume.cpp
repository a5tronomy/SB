#include "SBFootStepPhySurfaceVolume.h"

ASBFootStepPhySurfaceVolume::ASBFootStepPhySurfaceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->OverrideFootStepPhySurface = SurfaceType_Max;
    this->Priority = 0.00f;
    this->VolumeDetailMode = DM_Low;
}


