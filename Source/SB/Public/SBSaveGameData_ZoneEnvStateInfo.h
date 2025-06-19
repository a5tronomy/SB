#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ZoneEnvStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEnvStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StateTagName;
    
    UPROPERTY(EditAnywhere)
    bool bDropedReward;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentProgressValue;
    
    SB_API FSBSaveGameData_ZoneEnvStateInfo();
};

