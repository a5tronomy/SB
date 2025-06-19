#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBAnimNodeCustomPlayType.h"
#include "ESBAnimNodeSequenceSlot.h"
#include "ESBCharacterCustomAnim.h"
#include "ESBCustomBlendSpaceParamType.h"
#include "ESBConditionCheckType.h"
#include "ESBFootIKApplyType.h"
#include "ESBShowActorTarget.h"
#include "ESBShowAnimAreaDirectionCheckType.h"
#include "ESBShowAnimCheckActiveType.h"
#include "ESBShowAnimDirectionalAnimationType.h"
#include "ESBShowAnimPlayBody.h"
#include "ESBShowAnimSequencePlayType.h"
#include "ESBShowPlayerCheck.h"
#include "ESBSkelMeshSlot.h"
#include "OptionalAnimationByAngle.h"
#include "SBCustomLayeredBoneBlendInfo.h"
#include "SBShowAnimKeyStep.h"
#include "SBShowKey.h"
#include "SBShowAnimKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowAnimCheckActiveType::Type> CheckActiveType;
    
    UPROPERTY(EditAnywhere)
    bool InverseCheckActiveResult;
    
    UPROPERTY(EditAnywhere)
    float ActiveMinAngle;
    
    UPROPERTY(EditAnywhere)
    float ActiveMaxAngle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Swimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> UnderWaterSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CharacterAxisUpDirection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowAnimSequencePlayType::Type> AnimSequencePlayType;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterCustomAnim;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
    UPROPERTY(EditAnywhere)
    bool bResourcePathWithSubPath;
    
    UPROPERTY(EditAnywhere)
    FString AnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> CustomAnim;
    
    UPROPERTY()
    bool bUseDirectionalBlend;
    
    UPROPERTY()
    bool bUseMoveWeight;
    
    UPROPERTY()
    bool bDirectionalAnimation;
    
    UPROPERTY()
    bool bUseAreaDirectionCheck;
    
    UPROPERTY()
    bool bCheckFootLeftRigh;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowAnimDirectionalAnimationType::Type> DirectionalAnimationType;
    
    UPROPERTY(EditAnywhere)
    bool bUseOptionalAnimationByDirectionalAngle;
    
    UPROPERTY(EditAnywhere)
    bool bAreaDirectionToTargetDirection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowAnimAreaDirectionCheckType::Type> AreaDirectionCheckType;
    
    UPROPERTY(EditAnywhere)
    FVector2D DefaultDirection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> FrontCustomAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> BackCustomAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> LeftCustomAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> RightCustomAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> UpCustomAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCustomAnim> DownCustomAnim;
    
    UPROPERTY(EditAnywhere)
    FString FrontAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString BackAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString LeftAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString RightAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString UpAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString DownAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAnimNodeCustomPlayType> CustomAnimPlayType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCustomBlendSpaceParamType> CustomBlendSpaceInputType1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCustomBlendSpaceParamType> CustomBlendSpaceInputType2;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCustomLayeredBoneBlendInfo> CustomLayeredBoneBlendInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FOptionalAnimationByAngle> OptionalAnimationByAngleArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StopCustomAniNameArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowAnimPlayBody::Type> PlayBodyType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    float PlayStartTime;
    
    UPROPERTY(EditAnywhere)
    float PlayEndTime;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTimeAtMoving;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    bool bNotPlayIfSamePriority;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PlayIfSamePriorityCustomAniNameArray;
    
    UPROPERTY(EditAnywhere)
    bool bHoldEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bStopAtMove;
    
    UPROPERTY(EditAnywhere)
    bool bStopAtLand;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreStopAnimationWhenEnd;
    
    UPROPERTY(EditAnywhere)
    bool bPlayWhenZeroVelocity;
    
    UPROPERTY(EditAnywhere)
    int32 CustomAnimIndex;
    
    UPROPERTY(EditAnywhere)
    bool bRetryPlayWhenNotPlayed;
    
    UPROPERTY(EditAnywhere)
    bool bBoneBlendActive;
    
    UPROPERTY(EditAnywhere)
    float BoneBlendActiveTime;
    
    UPROPERTY(EditAnywhere)
    float BoneBlendDeactiveTime;
    
    UPROPERTY(EditAnywhere)
    bool bKeyUseStep;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowAnimKeyStep> ShowStepArray;
    
    UPROPERTY(EditAnywhere)
    FName RootMotionKey;
    
    UPROPERTY(EditAnywhere)
    FString RootMotionDataPath;
    
    UPROPERTY(EditAnywhere)
    bool bRootMotionCanStop;
    
    UPROPERTY(EditAnywhere)
    bool bDisableHeadLookAtIK;
    
    UPROPERTY(EditAnywhere)
    bool bDisableBodyLookAtIK;
    
    UPROPERTY(EditAnywhere)
    bool bDisableTPSAimIK;
    
    UPROPERTY(EditAnywhere)
    float DisableTPSAimIKEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerOnly;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowPlayerCheck> PlayerCheck;
    
    UPROPERTY(EditAnywhere)
    bool bClearBlendSpaceAllPrevSample;
    
    UPROPERTY(EditAnywhere)
    bool bResetAnimSlotSequence;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAnimNodeSequenceSlot> ResetAnimSlotSequenceSlot;
    
    UPROPERTY(EditAnywhere)
    float ResetAnimSlotSequenceApplyTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseStruggleAnimWhenMoveStruggle;
    
    UPROPERTY(EditAnywhere)
    FString AnimResourcePathAtMoveStruggle;
    
    UPROPERTY(EditAnywhere)
    bool bDisableIdleAdditiveAnim;
    
    UPROPERTY(EditAnywhere)
    float AdditiveAnimActiveTimeWhenBeforeEnd;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreShowAnimAsyncLoadLog;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenActorAttachSequence;
    
    UPROPERTY(EditAnywhere)
    bool bStopAttachSequenceWithoutPlayable;
    
    UPROPERTY(EditAnywhere)
    bool bSetSkeletalMeshNotifyAnim;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBFootIKApplyType> AnimApplyIKType;
    
    UPROPERTY(EditAnywhere)
    bool bDisableFeetIK;
    
    USBShowAnimKey();

};

