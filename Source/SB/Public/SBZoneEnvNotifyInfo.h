#pragma once
#include "CoreMinimal.h"
#include "SBZoneEnvNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NotifyTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NotifyZoneEvent;
    
    SB_API FSBZoneEnvNotifyInfo();
};

