#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_InteractInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_InteractInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bInteracted;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> CustomDataMap;
    
    SB_API FSBSaveGameData_InteractInfo();
};

