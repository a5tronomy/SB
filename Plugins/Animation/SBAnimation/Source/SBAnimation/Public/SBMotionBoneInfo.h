#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMotionBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBMotionBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BoneName;
    
    UPROPERTY()
    FVector PositionInCS;
    
    UPROPERTY()
    FVector VelocityInCS;
    
    SBANIMATION_API FSBMotionBoneInfo();
};

