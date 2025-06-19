#include "SBShowAnimTransitKey.h"

USBShowAnimTransitKey::USBShowAnimTransitKey() {
    this->TransitAnimType = ESBCharTransitAnim_RunToIdle_L;
    this->UseTransitAnimGroup = false;
    this->TransitAnimGroupData = NULL;
    this->TransitAnimChannel = ESBAnimTransitChannel::Upper;
    this->bStopActiveTransitAnim = false;
    this->bExecIfRunning = false;
    this->Target = ShowActorTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->bAbsoluteResourcePath = false;
}


