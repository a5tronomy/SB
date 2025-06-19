#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EndingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_EndingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_KillElder;
    
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_KillLily;
    
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_SaveLily;
    
    SB_API FSBSaveGameData_EndingInfo();
};

