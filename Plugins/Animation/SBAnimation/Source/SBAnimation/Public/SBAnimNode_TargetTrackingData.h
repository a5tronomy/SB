#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SBAnimNode_TargetTrackingData.generated.h"

USTRUCT()
struct FSBAnimNode_TargetTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    SBANIMATION_API FSBAnimNode_TargetTrackingData();
};

