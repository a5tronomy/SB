#pragma once
#include "CoreMinimal.h"
#include "SBPostProcessDepthOfFieldAdvanceData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSBPostProcessDepthOfFieldAdvanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldOcclusion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldBokehShape: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldColorThreshold: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldSizeThreshold: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldSkyFocusDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldVignetteSize: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthOfFieldOcclusion;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UTexture* DepthOfFieldBokehShape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthOfFieldColorThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthOfFieldSizeThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthOfFieldSkyFocusDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthOfFieldVignetteSize;
    
    SB_API FSBPostProcessDepthOfFieldAdvanceData();
};

