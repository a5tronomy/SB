#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorWindSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCloudWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighCloudWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudNoiseWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudNoiseWindSpeedHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudNoiseWindSpeedVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrecipitationWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrecipitationWindSpeed;
    
    SKYCREATORPLUGIN_API FSkyCreatorWindSettings();
};

