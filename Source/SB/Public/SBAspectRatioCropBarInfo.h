#pragma once
#include "CoreMinimal.h"
#include "SBAspectRatioCropBarInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBAspectRatioCropBarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bActive;
    
    UPROPERTY(Transient)
    float AspectRatio;
    
    UPROPERTY(Transient)
    float CropTargetAspectRatio;
    
    UPROPERTY(Transient)
    float BlendDuration;
    
    UPROPERTY(Transient)
    double BlendStartSecond;
    
    UPROPERTY(Transient)
    float BlendAlpha;
    
    SB_API FSBAspectRatioCropBarInfo();
};

