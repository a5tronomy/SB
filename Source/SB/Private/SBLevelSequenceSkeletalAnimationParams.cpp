#include "SBLevelSequenceSkeletalAnimationParams.h"

FSBLevelSequenceSkeletalAnimationParams::FSBLevelSequenceSkeletalAnimationParams() {
    this->PlayType = ESBLevelSequenceSkeletalAnimationPlayType_CustomPlay;
    this->AnimMeshSlot = ESBMesh_Body;
    this->AssetType = ESBLevelSequenceSkeletalAnimationAssetType_Asset;
    this->Animation = NULL;
    this->SocialAnimBlendTableData = false;
    this->DepencendySequenceTime = false;
    this->LoopInfinity = false;
    this->DuplicatePlaySkip = false;
    this->FinishNotStop = false;
    this->bStopAtMoving = false;
    this->PlayRate = 0.00f;
    this->Priority = 0.00f;
    this->bUsePlayRangeAnimSeq = false;
    this->OverrideSBAnimNodeBlendIn = 0.00f;
    this->FootIKControl = SBLevelSequenceSkeletalAnimationFootIKType_Deactive;
    this->FootIKBlendTime = 0.00f;
    this->StopFootIKControl = SBLevelSequenceSkeletalAnimationFootIKType_Deactive;
    this->StopFootIKBlendTime = 0.00f;
    this->UseFootSync = false;
    this->FootSyncEndAnimLength = 0.00f;
    this->FootSyncAdditiveTime = 0.00f;
    this->bStopAllAnim = false;
    this->UsePhysicsKeepFrame = false;
    this->PhysicsKeepFrameCount = 0;
    this->bImmidateAnimUpdate = false;
    this->bImmidateAnimUseResetSpring = false;
    this->AnimationNodeIndex = 0;
    this->visibleMeshSlot = false;
    this->bIgnoreTemplateContentType = false;
}

