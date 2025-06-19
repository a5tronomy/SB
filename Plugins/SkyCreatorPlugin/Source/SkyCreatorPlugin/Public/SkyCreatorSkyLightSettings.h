#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorSkyLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorSkyLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LowerHemisphereColor;
    
    SKYCREATORPLUGIN_API FSkyCreatorSkyLightSettings();
};

