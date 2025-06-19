#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskEventActionType.h"
#include "SBAliasSpawnPoint.h"
#include "SBQuestEventActionDataInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBQuestEventActionDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestTaskEventActionType> EventType;
    
    UPROPERTY(EditAnywhere)
    int32 EventProgressCount;
    
    UPROPERTY(EditAnywhere)
    FSBAliasSpawnPoint EventSpawnAlias;
    
    SB_API FSBQuestEventActionDataInfo();
};

