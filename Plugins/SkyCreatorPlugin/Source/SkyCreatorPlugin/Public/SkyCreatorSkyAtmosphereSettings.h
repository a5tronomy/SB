#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorSkyAtmosphereSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorSkyAtmosphereSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RayleighScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RayleighScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MieScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MieScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MieAbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MieAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MieAnisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MieExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Absorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SkyLuminanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightFogContribution;
    
    SKYCREATORPLUGIN_API FSkyCreatorSkyAtmosphereSettings();
};

