#include "SBShowHitReactionKey.h"

USBShowHitReactionKey::USBShowHitReactionKey() {
    this->bAdditiveAnim = false;
    this->bStopAtMove = false;
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = 0.00f;
    this->AnimPlayRate = 1.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bLoop = false;
    this->LoopCount = 0;
    this->AnimWeight = 1.00f;
    this->CustomIndex = 0;
    this->Priority = 0;
}


