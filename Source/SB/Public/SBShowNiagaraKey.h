#pragma once
#include "CoreMinimal.h"
#include "SBShowParticleBase.h"
#include "SBShowNiagaraKey.generated.h"

class UNiagaraSystem;

UCLASS(EditInlineNew)
class SB_API USBShowNiagaraKey : public USBShowParticleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* NiagaraTemplate;
    
    USBShowNiagaraKey();

};

