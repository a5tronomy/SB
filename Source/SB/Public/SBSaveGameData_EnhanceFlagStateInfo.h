#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EnhanceFlagStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_EnhanceFlagStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bFlag;
    
    UPROPERTY(EditAnywhere)
    bool bDirty;
    
    SB_API FSBSaveGameData_EnhanceFlagStateInfo();
};

