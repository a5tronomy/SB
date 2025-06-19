#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBLevelSequenceSkeletalAnimationAssetType.h"
#include "ESBLevelSequenceSkeletalAnimationFootIKType.h"
#include "ESBLevelSequenceSkeletalAnimationPlayType.h"
#include "ESBSkelMeshSlot.h"
#include "SBSocialAnimDescAlias.h"
#include "SBTableIndexSocialAnim.h"
#include "SBLevelSequenceSkeletalAnimationParams.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSBLevelSequenceSkeletalAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceSkeletalAnimationPlayType> PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> AnimMeshSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceSkeletalAnimationAssetType> AssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBTableIndexSocialAnim SocialAnimGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBSocialAnimDescAlias SocialAnimDescAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SocialAnimBlendTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DepencendySequenceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopInfinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DuplicatePlaySkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FinishNotStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopAtMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePlayRangeAnimSeq;
    
    UPROPERTY()
    float OverrideSBAnimNodeBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceSkeletalAnimationFootIKType> FootIKControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootIKBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceSkeletalAnimationFootIKType> StopFootIKControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StopFootIKBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber DeltaFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseFootSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootSyncEndAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootSyncAdditiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopAllAnim;
    
    UPROPERTY()
    bool UsePhysicsKeepFrame;
    
    UPROPERTY()
    int32 PhysicsKeepFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImmidateAnimUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImmidateAnimUseResetSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AnimationNodeIndex;
    
    UPROPERTY()
    uint8 visibleMeshSlot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreTemplateContentType;
    
    SB_API FSBLevelSequenceSkeletalAnimationParams();
};

