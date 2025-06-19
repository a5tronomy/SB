#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskConditonType.h"
#include "ESBUITaskConditionDisplayType.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeTaskCondition.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeTaskCondition : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TaskArray;
    
    UPROPERTY(VisibleAnywhere)
    ESBQuestTaskConditonType ConditionType;
    
    UPROPERTY(VisibleAnywhere)
    int32 IntValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUITaskConditionDisplayType> ShowType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeTaskCondition();

};

