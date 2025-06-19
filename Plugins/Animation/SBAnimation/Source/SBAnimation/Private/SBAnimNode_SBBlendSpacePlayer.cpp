#include "SBAnimNode_SBBlendSpacePlayer.h"

FSBAnimNode_SBBlendSpacePlayer::FSBAnimNode_SBBlendSpacePlayer() {
    this->bUseBlendSpaceSlot = false;
    this->BlendSpaceType = BlendSpaceSlot_Run;
    this->PrevSampleBlendingTime = 0.00f;
    this->RotateRootX = 0.00f;
    this->RotateRootY = 0.00f;
    this->bRotateRootBone = false;
    this->RotateRootRotDelta = 0.00f;
    this->bUseRotateRootRotDeltaCurve = false;
    this->RotateRootRotDeltaCurve = NULL;
    this->CurrentRotDeltaCurveTime = 0.00f;
    this->PrevBlendTotalWeight = 0.00f;
}

