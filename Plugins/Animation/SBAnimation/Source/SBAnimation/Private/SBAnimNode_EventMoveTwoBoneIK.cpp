#include "SBAnimNode_EventMoveTwoBoneIK.h"

FSBAnimNode_EventMoveTwoBoneIK::FSBAnimNode_EventMoveTwoBoneIK() {
    this->CurrentEffectorBlendTime = 0.00f;
    this->LastHitPhysMaterial = NULL;
    this->bDebugDrawView = false;
    this->bFreezeEffector = false;
    this->CurrentFreezeTime = 0.00f;
    this->FreezeDuration = 0.00f;
}

