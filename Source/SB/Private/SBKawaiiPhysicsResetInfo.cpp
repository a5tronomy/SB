#include "SBKawaiiPhysicsResetInfo.h"

FSBKawaiiPhysicsResetInfo::FSBKawaiiPhysicsResetInfo() {
    this->CurrentAlpha = 0.00f;
    this->TargetAlpha = 0.00f;
    this->FadeInTime = 0.00f;
    this->WaitingTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->bNeedReset = false;
}

