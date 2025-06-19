#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorExponentialHeightFogSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorExponentialHeightFogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FogStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondFogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricFogExtinctionScale;
    
    SKYCREATORPLUGIN_API FSkyCreatorExponentialHeightFogSettings();
};

