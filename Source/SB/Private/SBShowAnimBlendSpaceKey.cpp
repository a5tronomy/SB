#include "SBShowAnimBlendSpaceKey.h"

USBShowAnimBlendSpaceKey::USBShowAnimBlendSpaceKey() {
    this->Priority = 0;
    this->BlendSpaceSlot = BlendSpaceSlot_Run;
    this->BlendSpaceChannel = ESBBlendSpaceChannel::Upper;
    this->bStopWhenJump = false;
    this->bResetPlayTime = false;
    this->bUseStruggleBSWhenMoveStruggle = false;
    this->Target = ShowActorTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->bAbsoluteResourcePath = false;
    this->bUseAreaDirectionCheck = false;
    this->bStopPlayedCustomAnim = false;
    this->bBlockPlayTransitAnim = false;
    this->bDisableHeadLookAtIK = false;
    this->bDisableBodyLookAtIK = false;
}


