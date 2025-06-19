#pragma once
#include "CoreMinimal.h"
#include "SBZoneEventDataList.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEventDataList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneEventList;
    
    SB_API FSBZoneEventDataList();
};

