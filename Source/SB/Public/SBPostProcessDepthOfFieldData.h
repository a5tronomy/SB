#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SBDepthOfFieldRuntimeFloatCurve.h"
#include "SBPostProcessDepthOfFieldAdvanceData.h"
#include "SBPostProcessDepthOfFieldData.generated.h"

USTRUCT(BlueprintType)
struct FSBPostProcessDepthOfFieldData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldMethod: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurAmount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldNearTransitionRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldFarTransitionRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldMaxBokehSize: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldNearBlurSize: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_DepthOfFieldFarBlurSize: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDepthOfFieldMethod> DepthOfFieldMethod;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldFocalDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurAmount;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurRadius;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldDepthBlurRadiusCurve;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFocalRegion;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldFocalRegionCurve;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldNearTransitionRegion;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFarTransitionRegion;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldScale;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldMaxBokehSize;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldNearBlurSize;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldNearBlurSizeCurve;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFarBlurSize;
    
    UPROPERTY(EditAnywhere)
    FSBDepthOfFieldRuntimeFloatCurve DepthOfFieldFarBlurSizeCurve;
    
    UPROPERTY(EditAnywhere)
    FSBPostProcessDepthOfFieldAdvanceData AdvanceData;
    
    SB_API FSBPostProcessDepthOfFieldData();
};

