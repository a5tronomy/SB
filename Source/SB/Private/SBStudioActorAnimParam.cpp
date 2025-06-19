#include "SBStudioActorAnimParam.h"

FSBStudioActorAnimParam::FSBStudioActorAnimParam() {
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = 0.00f;
    this->PlayRate = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bLoop = false;
    this->LoopCount = 0;
    this->Priority = 0.00f;
}

