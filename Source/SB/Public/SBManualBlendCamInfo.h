#pragma once
#include "CoreMinimal.h"
#include "SBManualBlendCamInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBManualBlendCamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Length[3];
    
    UPROPERTY(Transient)
    float Height[3];
    
    UPROPERTY(Transient)
    float LeftRight[3];
    
    UPROPERTY(Transient)
    bool bActive;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    float CurrentTime;
    
    SB_API FSBManualBlendCamInfo();
};

