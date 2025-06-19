#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "FSBAnimNode_GroundCollisionBoneAxis.h"
#include "SBAnimNode_GroundCollisionBoneData.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimNode_GroundCollisionBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<FSBAnimNode_GroundCollisionBoneAxis::Type> AxisType;
    
    UPROPERTY(EditAnywhere)
    float CapsuleRadius;
    
    UPROPERTY(EditAnywhere)
    float CapsuleHalfHeight;
    
    SBANIMATION_API FSBAnimNode_GroundCollisionBoneData();
};

