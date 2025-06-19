#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraTypes.h"
#include "NiagaraVariant.h"
#include "SBNiagaraSystemWithOverrideParam.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBNiagaraSystemWithOverrideParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath NiagaraSystemPath;
    
    UPROPERTY()
    TMap<FNiagaraVariableBase, FNiagaraVariant> InstanceParameterOverrides;
    
    FSBNiagaraSystemWithOverrideParam();
};

