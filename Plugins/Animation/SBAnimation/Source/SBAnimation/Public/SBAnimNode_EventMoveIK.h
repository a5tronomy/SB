#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "SBEventMoveIKData.h"
#include "SBAnimNode_EventMoveIK.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_EventMoveIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget RootBoneToModify;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneSocketTarget> AdjustBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBEventMoveIKData EventMoveIKData;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawView;
    
    UPROPERTY(Transient)
    FSBEventMoveIKData CacheEventMoveIKData;
    
    UPROPERTY(Transient)
    FVector BlendStartEffectorOffset;
    
    UPROPERTY(Transient)
    FVector BlendTargetEffectorOffset;
    
    UPROPERTY(Transient)
    FVector CurrentEffectorOffset;
    
    UPROPERTY(Transient)
    float CurrentEffectorBlendTime;
    
    UPROPERTY(Transient)
    FVector LastHitImpactPoint;
    
    UPROPERTY(Transient)
    FVector FinalAdjustOffset;
    
    FSBAnimNode_EventMoveIK();
};

