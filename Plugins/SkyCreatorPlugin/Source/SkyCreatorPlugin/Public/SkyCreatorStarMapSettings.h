#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorStarMapSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorStarMapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor StarMapColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapTwinkleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapTwinkleSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapTwinkleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapHorizonThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarMapAtmosphereThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NightHorizonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NightZenithColor;
    
    SKYCREATORPLUGIN_API FSkyCreatorStarMapSettings();
};

