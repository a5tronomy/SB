#include "SBAnimNode_SBSequencePlayer.h"

FSBAnimNode_SBSequencePlayer::FSBAnimNode_SBSequencePlayer() {
    this->PrevSequence = NULL;
    this->AnimSlotType = AnimSlot_Fall;
    this->bUseAnimSlotNameSequenceOverrride = false;
    this->PrevSampleBlendingTime = 0.00f;
    this->PrevBlendTotalWeight = 0.00f;
    this->RotateRootX = 0.00f;
    this->RotateRootY = 0.00f;
    this->bRotateRootBone = false;
}

