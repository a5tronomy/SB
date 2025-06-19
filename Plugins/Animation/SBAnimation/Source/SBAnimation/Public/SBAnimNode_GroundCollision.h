#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "SBAnimNode_GroundCollisionBoneData.h"
#include "SBAnimNode_GroundCollision.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_GroundCollision : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAnimNode_GroundCollisionBoneData> CollisionCheckBoneArray;
    
    FSBAnimNode_GroundCollision();
};

