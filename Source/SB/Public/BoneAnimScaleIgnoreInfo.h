#pragma once
#include "CoreMinimal.h"
#include "BoneAnimScaleIgnoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FBoneAnimScaleIgnoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<int32, bool> IgnoreBoneMap;
    
    UPROPERTY(Transient)
    float BlendInTime;
    
    UPROPERTY(Transient)
    float BlendOutTime;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    float CurrentTime;
    
    UPROPERTY(Transient)
    float CurrentWeight;
    
    SB_API FBoneAnimScaleIgnoreInfo();
};

