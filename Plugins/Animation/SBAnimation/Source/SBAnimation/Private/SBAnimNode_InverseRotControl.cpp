#include "SBAnimNode_InverseRotControl.h"

FSBAnimNode_InverseRotControl::FSBAnimNode_InverseRotControl() {
    this->AttenuationFromBaseBoneRotScale = 0.00f;
    this->DeaccellationRotPerSec = 0.00f;
    this->ThreshHoldRotValue = 0.00f;
    this->MaxTotalRotValue = 0.00f;
    this->MaxDeltaRotValue = 0.00f;
    this->bUseLocationControl = false;
    this->AttenuationFromBaseBoneLocScale = 0.00f;
    this->DeaccellationLocPerSec = 0.00f;
    this->bDynamicDisableLocControl = false;
    this->DynamicDisableLocBlendSpeed = 0.00f;
    this->DynamicDisableLocMinAlpha = 0.00f;
    this->DynamicDisableLocAlpha = 0.00f;
    this->BeforeAlpha = 0.00f;
    this->AccumulateSpeed = 0.00f;
    this->AlphaBlendSpeed = 0.00f;
}

