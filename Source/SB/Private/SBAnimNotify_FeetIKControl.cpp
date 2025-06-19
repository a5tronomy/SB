#include "SBAnimNotify_FeetIKControl.h"

USBAnimNotify_FeetIKControl::USBAnimNotify_FeetIKControl() {
    this->TraceScale_FeetIK = 1.00f;
    this->TraceScale_Duration = -1.00f;
    this->FootIKSetPriority = 100.00f;
    this->bEnableFeetIK = true;
    this->FlatGroundBlendTime = 0.10f;
    this->SlantGroundBlendTime = 0.10f;
    this->RecoverPendingDuration = -1.00f;
    this->RecoverFlatGroundBlendTime = 0.10f;
    this->RecoverSlantGroundBlendTime = 0.10f;
}


