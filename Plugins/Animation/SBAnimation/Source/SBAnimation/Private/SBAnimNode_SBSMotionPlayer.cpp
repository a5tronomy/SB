#include "SBAnimNode_SBSMotionPlayer.h"

FSBAnimNode_SBSMotionPlayer::FSBAnimNode_SBSMotionPlayer() {
    this->MotionDB = NULL;
    this->MatchPowerMoveInput = 0.00f;
    this->MatchPowerMoveDir = 0.00f;
    this->MatchPowerVelocity = 0.00f;
    this->MatchPowerBone = 0.00f;
    this->PrevSampleBlendingTime = 0.00f;
    this->TimeForUpdate = 0.00f;
    this->IgnoreBoneBlendIndex = 0;
    this->MoveAnimIndexTimeInterval = 0.00f;
    this->ComputeMotionCount = 0;
    this->UpdateTime = 0.00f;
    this->ComputeCount = 0;
    this->CurrentMotionIndex = 0;
    this->PrevBlendTotalWeight = 0.00f;
    this->CurrentTMDeltaTime = 0.00f;
    this->CurrentMarkerIndex = 0;
}

