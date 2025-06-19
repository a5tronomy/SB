#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "SBMovementBoneData.h"
#include "SBAnimNode_MovementBone.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_MovementBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FSBMovementBoneData> MovementBoneList;
    
    FSBAnimNode_MovementBone();
};

