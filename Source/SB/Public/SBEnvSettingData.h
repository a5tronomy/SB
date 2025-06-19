#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SBEnvControlSettings -FallbackName=SBEnvControlSettings
#include "SBEnvSettingScalarParam.h"
#include "SBEnvSettingTextureParam.h"
#include "SBEnvSettingVectorParam.h"
#include "SBEnvSettingData.generated.h"

UCLASS()
class SB_API USBEnvSettingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator SunDirection;
    
    UPROPERTY(EditAnywhere)
    bool bDroneLightCastShadow;
    
    UPROPERTY(EditAnywhere)
    float DroneLightIntensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DroneLightColor;
    
    UPROPERTY(EditAnywhere)
    float DroneLightVolumetricScatteringIntensit;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBEnvSettingScalarParam> MaterialScalarParams;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBEnvSettingVectorParam> MaterialVectorParams;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBEnvSettingTextureParam> MaterialTextureParams;
    
    UPROPERTY(EditAnywhere)
    FSBEnvControlSettings EnvControlSetting;
    
    USBEnvSettingData();

};

