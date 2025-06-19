#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceGraphicsAutoScaleTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceGraphicsAutoScaleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool AmbientOcclusionMaxQuality;
    
    UPROPERTY()
    bool AmbientOcclusionRadiusScale;
    
    UPROPERTY()
    bool LightShaftDownSampleFactor;
    
    UPROPERTY()
    bool VolumetricFogGridSizeZ;
    
    UPROPERTY()
    bool VolumetricFogGridPixelSize;
    
    UPROPERTY()
    bool PostProcessAAQuality;
    
    UPROPERTY()
    bool EnableCustomDepth;
    
    UPROPERTY()
    bool EnableDecalChannelMaskPass;
    
    UPROPERTY()
    bool VolumetricCloudHide;
    
    UPROPERTY()
    bool DOFRecombineOff;
    
    UPROPERTY()
    bool FogOff;
    
    UPROPERTY()
    bool VolumetricFogOff;
    
    UPROPERTY()
    int32 FoliageForceLOD;
    
    UPROPERTY()
    int32 AmbientOcclusionLevel;
    
    UPROPERTY()
    int32 FSR2ScreenPercentage4KOnly;
    
    UPROPERTY()
    bool AmbientCubemapOff;
    
    UPROPERTY()
    bool SSROff;
    
    UPROPERTY()
    bool UsePDODither;
    
    UPROPERTY()
    float PDODitherAlphaThreshold;
    
    UPROPERTY()
    bool RVTUpdateSkip;
    
    UPROPERTY()
    bool EnableDistanceFieldsRealloc;
    
    UPROPERTY()
    bool EnableFSR2BrightnessToneDown;
    
    UPROPERTY()
    bool EnableHLOD;
    
    UPROPERTY()
    float NearClipPlane;
    
public:
    SB_API FSBLevelSequenceGraphicsAutoScaleTemplate();
};

