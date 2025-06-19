#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyCreatorMoonLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorMoonLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CloudScatteredLuminanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudShadowStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudShadowOnAtmosphereStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudShadowOnSurfaceStrength;
    
    SKYCREATORPLUGIN_API FSkyCreatorMoonLightSettings();
};

