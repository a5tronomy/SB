#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "SBEventMoveIKData.h"
#include "SBAnimNode_EventMoveTwoBoneIK.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_EventMoveTwoBoneIK : public FAnimNode_TwoBoneIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBEventMoveIKData EventMoveIKData;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget AdjustBoneTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneSocketTarget> FixedWithFreezeBone;
    
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
    UPhysicalMaterial* LastHitPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawView;
    
    UPROPERTY(Transient)
    FVector FinalOffsetLocal;
    
    UPROPERTY(Transient)
    bool bFreezeEffector;
    
    UPROPERTY(Transient)
    float CurrentFreezeTime;
    
    UPROPERTY(Transient)
    float FreezeDuration;
    
    UPROPERTY(Transient)
    FVector FreezeLocationWS;
    
    FSBAnimNode_EventMoveTwoBoneIK();
};

