#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SBLookAtIKControlData.generated.h"

USTRUCT(BlueprintType)
struct FSBLookAtIKControlData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float StartYawValue;
    
    UPROPERTY(EditAnywhere)
    float StartPitchValue;
    
    UPROPERTY(EditAnywhere)
    float LookAtClampYaw;
    
    UPROPERTY(EditAnywhere)
    float LookAtClampPitchUp;
    
    UPROPERTY(EditAnywhere)
    float LookAtClampPitchDown;
    
    UPROPERTY(EditAnywhere)
    float StopPitchWhenGreaterYaw;
    
    UPROPERTY(EditAnywhere)
    float StopLookAtWhenGreaterYaw;
    
    SBANIMATION_API FSBLookAtIKControlData();
};

