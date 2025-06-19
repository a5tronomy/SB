#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EffectObject.h"
#include "SBSaveGameData_Effect.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_EffectObject> EffectList;
    
    SB_API FSBSaveGameData_Effect();
};

