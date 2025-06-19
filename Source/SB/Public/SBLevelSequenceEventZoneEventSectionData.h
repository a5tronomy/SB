#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBLevelSequenceEventZoneEventSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventZoneEventSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEvent EventAlias;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreObserve;
    
    SB_API FSBLevelSequenceEventZoneEventSectionData();
};

