#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ZoneEnvNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEnvNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bFire;
    
    SB_API FSBSaveGameData_ZoneEnvNotifyInfo();
};

