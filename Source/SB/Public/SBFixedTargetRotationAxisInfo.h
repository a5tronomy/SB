#pragma once
#include "CoreMinimal.h"
#include "SBFixedTargetRotationAnimInfo.h"
#include "SBFixedTargetRotationAxisInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBFixedTargetRotationAxisInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBFixedTargetRotationAnimInfo> RotationInfo_Yaw;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBFixedTargetRotationAnimInfo> RotationInfo_Pitch;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBFixedTargetRotationAnimInfo> RotationInfo_Roll;
    
    SB_API FSBFixedTargetRotationAxisInfo();
};

