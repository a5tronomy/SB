#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "SBLookAtIKCachedBoneData.generated.h"

USTRUCT()
struct FSBLookAtIKCachedBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference Bone;
    
    UPROPERTY()
    int32 RefSkeletonIndex;
    
    UPROPERTY()
    FTransform BoneTransform;
    
    SBANIMATION_API FSBLookAtIKCachedBoneData();
};

