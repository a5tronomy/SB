#include "SBStreamingLevelLoadingBarrierVolume.h"

ASBStreamingLevelLoadingBarrierVolume::ASBStreamingLevelLoadingBarrierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->WaitDistance = 1000.00f;
    this->KeepDistance = 2000.00f;
}


