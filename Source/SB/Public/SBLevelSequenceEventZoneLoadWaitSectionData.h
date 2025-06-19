#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventZoneLoadWaitSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventZoneLoadWaitSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WaitLimitTime;
    
    SB_API FSBLevelSequenceEventZoneLoadWaitSectionData();
};

