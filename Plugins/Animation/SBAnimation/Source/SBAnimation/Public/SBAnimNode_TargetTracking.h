#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "SBAnimNode_TargetTracking.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_TargetTracking : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseTargetBone;
    
    FSBAnimNode_TargetTracking();
};

