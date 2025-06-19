#pragma once
#include "CoreMinimal.h"
#include "CacheHitBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FCacheHitBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BoneIndex;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> SideIndex;
    
    SBANIMATION_API FCacheHitBoneInfo();
};

