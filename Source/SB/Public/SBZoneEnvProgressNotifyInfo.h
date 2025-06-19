#pragma once
#include "CoreMinimal.h"
#include "ESBEnvProgressNotifyFireType.h"
#include "SBZoneEnvNotifyInfo.h"
#include "SBZoneEnvProgressNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvProgressNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEnvProgressNotifyFireType> NotifyFireType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvNotifyInfo> ProgressNotifyList;
    
    SB_API FSBZoneEnvProgressNotifyInfo();
};

