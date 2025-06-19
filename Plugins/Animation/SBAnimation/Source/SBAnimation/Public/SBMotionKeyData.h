#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMotionBoneInfo.h"
#include "SBMotionFutureData.h"
#include "SBMotionKeyData.generated.h"

USTRUCT(BlueprintType)
struct FSBMotionKeyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    int32 AnimSeqIndex;
    
    UPROPERTY()
    TArray<FSBMotionBoneInfo> BoneInfos;
    
    UPROPERTY()
    FVector VelocityInCS;
    
    UPROPERTY()
    FSBMotionFutureData FutureData;
    
    SBANIMATION_API FSBMotionKeyData();
};

