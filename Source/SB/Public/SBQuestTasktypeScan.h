#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTasktypeScan.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTasktypeScan : public USBQuestTaskNode {
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
    
    USBQuestTasktypeScan();

};

