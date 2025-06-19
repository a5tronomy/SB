#include "SBCineCameraPostProcessActor.h"

ASBCineCameraPostProcessActor::ASBCineCameraPostProcessActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRun = false;
    this->PostProcessBlendWeight = 0.00f;
}


