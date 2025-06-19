#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SBEnvControlSettings -FallbackName=SBEnvControlSettings
#include "GameFramework/Volume.h"
#include "SBEnvParticle.h"
#include "SBMapSectorID.h"
#include "StellarBladeCustom.h"
#include "SBEnvControlVolume.generated.h"

class USBEnvSettingData;

UCLASS()
class SB_API ASBEnvControlVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBEnvSettingData* EnvSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsUnbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSBEnvParticle> ParticlesAttachToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActiveParticleAttachToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWaterSingleLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReactiveMaskBaseCustomBiasScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReactiveMaskBaseCustomVelocityFactor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSBEnvControlSettings OverrideControlSettingData;
    
    UPROPERTY(Transient)
    FGuid OverrideControlGuid;
    
    UPROPERTY(Transient)
    float OverrideControlSettingWeight;
    
public:
    ASBEnvControlVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshProperty();
    
};

