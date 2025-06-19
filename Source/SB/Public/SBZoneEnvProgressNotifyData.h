#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBZoneEnvProgressNotifyData.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvProgressNotifyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NotifyProgressValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventList;
    
    SB_API FSBZoneEnvProgressNotifyData();
};

