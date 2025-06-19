#pragma once
#include "CoreMinimal.h"
#include "ESBQuestEventTargetType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasQuest.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventQuest.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventQuest : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasQuest Quest;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestEventTargetType> TargetType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventQuest();

};

