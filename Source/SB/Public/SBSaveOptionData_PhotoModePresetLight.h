#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveOptionData_PhotoModePresetLight.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModePresetLight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Index;
    
    UPROPERTY(EditAnywhere)
    bool bActivated;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    int32 Channel;
    
    UPROPERTY(EditAnywhere)
    bool bShadow;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    int32 PresetColor;
    
    UPROPERTY(EditAnywhere)
    int32 ColorH;
    
    UPROPERTY(EditAnywhere)
    int32 Colors;
    
    UPROPERTY(EditAnywhere)
    int32 ColorL;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    float VolumetricScatteringIntensity;
    
    SB_API FSBSaveOptionData_PhotoModePresetLight();
};

