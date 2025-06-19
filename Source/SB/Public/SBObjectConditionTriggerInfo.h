#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBConditionTriggerExecType.h"
#include "ESBConditionTriggerRunType.h"
#include "SBAliasCondition.h"
#include "SBAliasZoneEvent.h"
#include "SBObjectConditionTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBObjectConditionTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition Condition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEvent ZoneEvent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionTriggerRunType> RunType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionTriggerExecType> ExecuteType;
    
    SB_API FSBObjectConditionTriggerInfo();
};

