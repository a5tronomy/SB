#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeEnterTrigger.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeEnterTrigger : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias ZoneTrigger;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeEnterTrigger();

};

