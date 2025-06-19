#include "SBShowKey.h"

USBShowKey::USBShowKey() {
    this->IsBattle = ConditionCheckType_None;
    this->StartTime = 0.00f;
    this->bKeepPlaying = false;
    this->bCheckHitLevel = false;
    this->bEnable = true;
    this->bNeedsExecutionKey = false;
    this->Duration = -1.00f;
}


