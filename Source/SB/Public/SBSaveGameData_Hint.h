#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_HintObject.h"
#include "SBSaveGameData_Hint.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Hint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_HintObject> DelayActivateHintList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActivateHintList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteHintList;
    
    SB_API FSBSaveGameData_Hint();
};

