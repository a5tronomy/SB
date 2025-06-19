#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBVFXParticle.h"
#include "SBVFXVolume.generated.h"

UCLASS()
class SB_API ASBVFXVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSBVFXParticle> ParticlesAttachToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActiveParticleAttachToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideEnvControlVolumeParticles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBVFXVolume(const FObjectInitializer& ObjectInitializer);

};

