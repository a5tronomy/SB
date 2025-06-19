#pragma once
#include "CoreMinimal.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeEnterZone.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeEnterZone : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> ZoneArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeEnterZone();

};

