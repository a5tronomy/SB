#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_HintObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_HintObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName HintAlias;
    
    UPROPERTY(EditAnywhere)
    float DelayActivateTime;
    
    SB_API FSBSaveGameData_HintObject();
};

