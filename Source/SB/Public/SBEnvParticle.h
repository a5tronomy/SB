#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBNiagaraSystemWithOverrideParam.h"
#include "SBEnvParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSBEnvParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBNiagaraSystemWithOverrideParam NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteRotation;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeTag;
    
    SB_API FSBEnvParticle();
};

