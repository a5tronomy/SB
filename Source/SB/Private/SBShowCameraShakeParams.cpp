#include "SBShowCameraShakeParams.h"

FSBShowCameraShakeParams::FSBShowCameraShakeParams() {
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.00f;
    this->OscillationBlendOutTime = 0.00f;
    this->AnimPlayRate = 0.00f;
    this->AnimScale = 0.00f;
    this->AnimBlendInTime = 0.00f;
    this->AnimBlendOutTime = 0.00f;
    this->RandomAnimSegmentDuration = 0.00f;
    this->Anim = NULL;
    this->bRandomAnimSegment = false;
}

