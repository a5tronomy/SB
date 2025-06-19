#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorVolumetricCloudSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorVolumetricCloudSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudHeightVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudSecondaryCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudSecondaryAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudSecondaryHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudAmountTypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudAmountTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudAmountTypeC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Albedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AlbedoBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomDarkening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NightEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseG2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringEccentricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShapeNoiseErosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetailNoiseErosion;
    
    SKYCREATORPLUGIN_API FSkyCreatorVolumetricCloudSettings();
};

