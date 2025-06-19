#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseEventCompleteType.h"
#include "ESBPhaseEventType.h"
#include "ESBZoneEventType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ZonePhaseEvent.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZonePhaseEvent : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhaseEventType> PhaseEventType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBPhaseEventCompleteType> PhaseEventCompleteType;
    
    UPROPERTY(VisibleAnywhere)
    int32 PhaseEventCompleteValue;
    
    UPROPERTY(VisibleAnywhere)
    FName NextPhaseEventName;
    
    UPROPERTY(VisibleAnywhere)
    float PhaseEventDelayTime;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bWithDestory;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY()
    TArray<TEnumAsByte<ESBZoneEventType>> EventTypeList;
    
    UPROPERTY()
    TArray<TEnumAsByte<ESBZoneEventType>> StartEventTypeList;
    
    UPROPERTY()
    TArray<TEnumAsByte<ESBZoneEventType>> CompleteEventTypeList;
    
    UPROPERTY()
    TArray<FName> EventList;
    
    UPROPERTY()
    TArray<FName> StartEventList;
    
    UPROPERTY()
    TArray<FName> CompleteEventList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> ActiveZoneEventList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> StartZoneEventList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> CompleteZoneEventList;
    
    USBToolDataNode_ZonePhaseEvent();

};

