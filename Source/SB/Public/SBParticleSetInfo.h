#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBNiagaraSystemWithOverrideParam.h"
#include "SBParticleSetInfo.generated.h"

class UParticleSystem;
class USBVibrationSet;
class USoundAttenuation;
class USoundBase;
class USoundClass;

USTRUCT(BlueprintType)
struct FSBParticleSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float RelativeScale;
    
    UPROPERTY(EditAnywhere)
    FSBNiagaraSystemWithOverrideParam NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    USoundBase* ParticleSound;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PtichMultiplier;
    
    UPROPERTY(EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    SB_API FSBParticleSetInfo();
};

