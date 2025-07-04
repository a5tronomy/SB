#include "SBShowAnimKey.h"

USBShowAnimKey::USBShowAnimKey() {
    this->CheckActiveType = ESBShowAnimCheckActiveType::NoneCheck;
    this->InverseCheckActiveResult = false;
    this->ActiveMinAngle = 0.00f;
    this->ActiveMaxAngle = 0.00f;
    this->Swimming = ConditionCheckType_None;
    this->UnderWaterSwimming = ConditionCheckType_None;
    this->CharacterAxisUpDirection = ConditionCheckType_None;
    this->AnimSequencePlayType = ESBShowAnimSequencePlayType::Default;
    this->bUseCharacterCustomAnim = false;
    this->bAbsoluteResourcePath = true;
    this->bResourcePathWithSubPath = false;
    this->CustomAnim = ESBCharacterCustomAnim_Custom1;
    this->bUseDirectionalBlend = false;
    this->bUseMoveWeight = false;
    this->bDirectionalAnimation = false;
    this->bUseAreaDirectionCheck = false;
    this->bCheckFootLeftRigh = false;
    this->DirectionalAnimationType = ESBShowAnimDirectionalAnimationType::Velocity;
    this->bUseOptionalAnimationByDirectionalAngle = false;
    this->bAreaDirectionToTargetDirection = false;
    this->AreaDirectionCheckType = ESBShowAnimAreaDirectionCheckType::FourSide;
    this->FrontCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->BackCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->LeftCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->RightCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->UpCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->DownCustomAnim = ESBCharacterCustomAnim_Custom1;
    this->CustomAnimPlayType = ESBCustomAnimType_AnimSequence;
    this->CustomBlendSpaceInputType1 = ESBCustomBS_None;
    this->CustomBlendSpaceInputType2 = ESBCustomBS_None;
    this->PlayBodyType = ESBShowAnimPlayBody::AllBody;
    this->Target = ShowActorTarget_MainActor;
    this->MeshSlot = ESBMesh_All;
    this->PlayRate = 1.00f;
    this->PlayTargetIndex = 0;
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = -1.00f;
    this->BlendInTime = 0.30f;
    this->BlendOutTime = 0.30f;
    this->BlendOutTimeAtMoving = -1.00f;
    this->bLoop = false;
    this->LoopCount = 0;
    this->Priority = 100.00f;
    this->bNotPlayIfSamePriority = false;
    this->bHoldEndTime = false;
    this->bStopAtMove = false;
    this->bStopAtLand = false;
    this->bIgnoreStopAnimationWhenEnd = false;
    this->bPlayWhenZeroVelocity = false;
    this->CustomAnimIndex = 0;
    this->bRetryPlayWhenNotPlayed = false;
    this->bBoneBlendActive = false;
    this->BoneBlendActiveTime = 0.00f;
    this->BoneBlendDeactiveTime = 0.00f;
    this->bKeyUseStep = true;
    this->bRootMotionCanStop = true;
    this->bDisableHeadLookAtIK = true;
    this->bDisableBodyLookAtIK = false;
    this->bDisableTPSAimIK = false;
    this->DisableTPSAimIKEndTime = 0.00f;
    this->bPlayerOnly = false;
    this->PlayerCheck = ShowPlayerCheck_None;
    this->bClearBlendSpaceAllPrevSample = false;
    this->bResetAnimSlotSequence = false;
    this->ResetAnimSlotSequenceSlot = AnimSlot_Fall;
    this->ResetAnimSlotSequenceApplyTime = 0.00f;
    this->bUseStruggleAnimWhenMoveStruggle = false;
    this->bDisableIdleAdditiveAnim = true;
    this->AdditiveAnimActiveTimeWhenBeforeEnd = 1.00f;
    this->bIgnoreShowAnimAsyncLoadLog = false;
    this->bStopWhenActorAttachSequence = false;
    this->bStopAttachSequenceWithoutPlayable = true;
    this->bSetSkeletalMeshNotifyAnim = false;
    this->AnimApplyIKType = ESBFootIK_Use;
    this->bDisableFeetIK = false;
}


