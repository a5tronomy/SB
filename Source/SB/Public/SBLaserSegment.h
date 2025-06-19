#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundAttenuation.h"
#include "SBLaserSegment.generated.h"

class AActor;
class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FSBLaserSegment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector StartPosition;
    
    UPROPERTY()
    FVector EndPosition;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* BeamNiagaraComponent;
    
    UPROPERTY()
    bool bDisable;
    
    UPROPERTY()
    FGuid SoundGUID;
    
    UPROPERTY()
    FGuid HitSoundGUID;
    
    UPROPERTY()
    FSoundAttenuationSettings SoundAttenuation;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> HitActor;
    
    SB_API FSBLaserSegment();
};

