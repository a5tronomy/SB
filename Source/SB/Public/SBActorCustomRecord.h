#pragma once
#include "CoreMinimal.h"
#include "SBActorCustomRecord.generated.h"

USTRUCT(BlueprintType)
struct FSBActorCustomRecord {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bSpawnOnFloor;
    
    UPROPERTY(Transient)
    TArray<FName> NameRecords;
    
    SB_API FSBActorCustomRecord();
};

