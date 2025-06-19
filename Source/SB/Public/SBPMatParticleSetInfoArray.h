#pragma once
#include "CoreMinimal.h"
#include "SBPMaDecalInfo.h"
#include "SBPMatParticleSetInfo.h"
#include "SBPMatParticleSetInfoArray.generated.h"

class USBVibrationSet;
class USoundAttenuation;
class USoundBase;
class USoundClass;

USTRUCT(BlueprintType)
struct FSBPMatParticleSetInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSBPMatParticleSetInfo> Array;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSBPMaDecalInfo> DecalArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundBase*> SoundArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USBVibrationSet*> VibrationSetArray;
    
    SB_API FSBPMatParticleSetInfoArray();
};

