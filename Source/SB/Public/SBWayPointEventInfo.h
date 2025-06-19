#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBWayPointEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBWayPointEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 RandWeight;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEvent ZoneEvent;
    
    SB_API FSBWayPointEventInfo();
};

