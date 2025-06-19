#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorWeatherFXSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWeatherFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainGravityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainGravityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainLifetimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainLifetimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainLengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D RainSplashSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D RainSplashSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SnowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowGravityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowGravityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowTurbulence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowLifetimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowLifetimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowSizeMax;
    
    SKYCREATORPLUGIN_API FSkyCreatorWeatherFXSettings();
};

