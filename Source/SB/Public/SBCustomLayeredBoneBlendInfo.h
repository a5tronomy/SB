#pragma once
#include "CoreMinimal.h"
#include "SBCustomLayeredBoneBlendInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCustomLayeredBoneBlendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    int32 BlendDepth;
    
    SB_API FSBCustomLayeredBoneBlendInfo();
};

