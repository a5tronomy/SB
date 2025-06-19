#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "SBNiagaraSystemWithOverrideParam.h"
#include "SBPMatParticleSetInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBPMatParticleSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBNiagaraSystemWithOverrideParam NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath ParticleSystemPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomDialation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCastShadow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FParticleSysParam> InstanceParameters;
    
    SB_API FSBPMatParticleSetInfo();
};

