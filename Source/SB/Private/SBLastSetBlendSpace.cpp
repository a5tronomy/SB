#include "SBLastSetBlendSpace.h"

FSBLastSetBlendSpace::FSBLastSetBlendSpace() {
    this->Channel = SBAnimChannel_Upper;
    this->bLowerOverlap = false;
    this->bUpperOverlap = false;
    this->bUpperOnly = false;
    this->PlayRate = 0.00f;
    this->Priority = 0;
    this->bStopWhenJump = false;
    this->bBlockPlayTransitAnim = false;
    this->bNeedApply = false;
    this->bNeedRemove = false;
    this->bResetPlayTime = false;
    this->DelayTime = 0.00f;
    this->Slot = BlendSpaceSlot_Run;
    this->pBlendSpaceAsset = NULL;
}

