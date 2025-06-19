#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventPathWayActionType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventRequestPathWay.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventRequestPathWay : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventPathWayActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasLevelTargetFilter LevelTargetFilter;
    
    UPROPERTY(EditAnywhere)
    FString PathWayAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventRequestPathWay();

};

