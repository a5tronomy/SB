#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorWeatherMaterialFXSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWeatherMaterialFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetnessAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainPuddlesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainPuddlesWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainPuddlesWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainRipplesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainRipplesIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainRipplesSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainRipplesFadingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowAmount;
    
    SKYCREATORPLUGIN_API FSkyCreatorWeatherMaterialFXSettings();
};

