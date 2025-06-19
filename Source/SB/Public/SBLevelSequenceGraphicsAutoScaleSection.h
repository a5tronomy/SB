#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceGraphicsAutoScaleSection.generated.h"

UCLASS(MinimalAPI)
class USBLevelSequenceGraphicsAutoScaleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool AmbientOcclusionMaxQuality;
    
    UPROPERTY(EditAnywhere)
    bool AmbientOcclusionRadiusScale;
    
    UPROPERTY(EditAnywhere)
    bool LightShaftDownSampleFactor;
    
    UPROPERTY(EditAnywhere)
    bool VolumetricFogGridSizeZ;
    
    UPROPERTY(EditAnywhere)
    bool VolumetricFogGridPixelSize;
    
    UPROPERTY(EditAnywhere)
    bool PostProcessAAQuality;
    
    UPROPERTY(EditAnywhere)
    bool EnableCustomDepth;
    
    UPROPERTY(EditAnywhere)
    bool EnableDecalChannelMaskPass;
    
    UPROPERTY(EditAnywhere)
    bool VolumetricCloudHide;
    
    UPROPERTY(EditAnywhere)
    bool DOFRecombineOff;
    
    UPROPERTY(EditAnywhere)
    bool FogOff;
    
    UPROPERTY(EditAnywhere)
    bool VolumetricFogOff;
    
    UPROPERTY(EditAnywhere)
    int32 FoliageForceLOD;
    
    UPROPERTY(EditAnywhere)
    int32 AmbientOcclusionLevel;
    
    UPROPERTY(EditAnywhere)
    int32 FSR2ScreenPercentage4KOnly;
    
    UPROPERTY(EditAnywhere)
    bool AmbientCubemapOff;
    
    UPROPERTY(EditAnywhere)
    bool SSROff;
    
    UPROPERTY(EditAnywhere)
    bool UsePDODither;
    
    UPROPERTY(EditAnywhere)
    float PDODitherAlphaThreshold;
    
    UPROPERTY(EditAnywhere)
    bool RVTUpdateSkip;
    
    UPROPERTY(EditAnywhere)
    bool EnableDistanceFieldsRealloc;
    
    UPROPERTY(EditAnywhere)
    bool EnableFSR2BrightnessToneDown;
    
    UPROPERTY(EditAnywhere)
    bool EnableHLOD;
    
    UPROPERTY(EditAnywhere)
    float NearClipPlane;
    
    USBLevelSequenceGraphicsAutoScaleSection();

};

