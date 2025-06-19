#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventConditionCheckType.h"
#include "ESBZoneEventType.h"
#include "SBAlias.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ZoneEvent.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEvent : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventType> EventType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAlias RefTableAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventConditionCheckType> EventConditionCheckType;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool UseRandomDelay;
    
    UPROPERTY(EditAnywhere)
    float EventDelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreEventByPlayerDead;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> FinishEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> AddEventList;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY()
    int32 ReturnValue;
    
    USBToolDataNode_ZoneEvent();

};

