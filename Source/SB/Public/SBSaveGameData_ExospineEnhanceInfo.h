#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ExospineEnhanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ExospineEnhanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnhance;
    
    UPROPERTY(EditAnywhere)
    int32 EnhanceLevel;
    
    SB_API FSBSaveGameData_ExospineEnhanceInfo();
};

