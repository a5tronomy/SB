#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ZoneEnvNotifyInfo.h"
#include "SBSaveGameData_ZoneEnvProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEnvProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CurrrentProgressValue;
    
    UPROPERTY(EditAnywhere)
    float MaxProgressValue;
    
    UPROPERTY(EditAnywhere)
    float TargetSpeed;
    
    UPROPERTY(EditAnywhere)
    float SpeedInterpTime;
    
    UPROPERTY(EditAnywhere)
    float InterpStartSpeed;
    
    UPROPERTY(EditAnywhere)
    float CurrentSpeed;
    
    UPROPERTY(EditAnywhere)
    float CurrentInterpTime;
    
    UPROPERTY(EditAnywhere)
    float RangeStartProgressValue;
    
    UPROPERTY(EditAnywhere)
    float RangeEndProgressValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEnvNotifyInfo> NotifyInfoList;
    
    SB_API FSBSaveGameData_ZoneEnvProgressInfo();
};

