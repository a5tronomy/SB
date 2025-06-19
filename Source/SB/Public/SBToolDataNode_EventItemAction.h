#pragma once
#include "CoreMinimal.h"
#include "ESBItemActionType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasItem.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventItemAction.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventItemAction : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBItemActionType> ActionType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasItem Item;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter TargetFilter;
    
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
    
    USBToolDataNode_EventItemAction();

};

