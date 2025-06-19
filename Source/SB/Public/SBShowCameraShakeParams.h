#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "Camera/CameraShake.h"
#include "Camera/CameraShake.h"
#include "SBShowCameraShakeParams.generated.h"

class UCameraAnim;

USTRUCT(BlueprintType)
struct FSBShowCameraShakeParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator FOVOscillation;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    float AnimScale;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomAnimSegmentDuration;
    
    UPROPERTY(EditAnywhere)
    UCameraAnim* Anim;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomAnimSegment: 1;
    
    SB_API FSBShowCameraShakeParams();
};

