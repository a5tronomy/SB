#pragma once
#include "CoreMinimal.h"
#include "SBCameraEventBaseScreenPosition.h"
#include "SBCameraEventBaseScreenPosData.generated.h"

USTRUCT(BlueprintType)
struct FSBCameraEventBaseScreenPosData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FSBCameraEventBaseScreenPosition Data;
    
    UPROPERTY(Transient)
    float DelayStartDuration;
    
    SB_API FSBCameraEventBaseScreenPosData();
};

