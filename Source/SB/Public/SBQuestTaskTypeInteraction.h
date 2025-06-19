#pragma once
#include "CoreMinimal.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeInteraction.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeInteraction : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TargetFilters;
    
    UPROPERTY(VisibleAnywhere)
    int32 ConditionCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeInteraction();

};

