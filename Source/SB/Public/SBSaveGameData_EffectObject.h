#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EffectObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_EffectObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 EffectTableId;
    
    UPROPERTY(EditAnywhere)
    float ElapsedStartTime;
    
    UPROPERTY(EditAnywhere)
    float ElapsedTime;
    
    SB_API FSBSaveGameData_EffectObject();
};

