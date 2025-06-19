#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "ESBZoneTriggerDoingType.h"
#include "ESBZoneTriggerFilterType.h"
#include "ESBZoneTriggerType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBAliasZone.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ZoneTrigger.generated.h"

class USBObjectMaterialData;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneTrigger : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone ZoneAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerType> TriggerType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EnterEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> LeaveEvent;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition Condition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    int32 InitialDoingCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerDoingType> DoingType;
    
    UPROPERTY(EditAnywhere)
    float ActiveRange;
    
    UPROPERTY()
    bool bEnableSave;
    
    UPROPERTY(EditAnywhere)
    FSBAliasLevelTargetFilter LevelTargetFilter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    bool bInOutTrigger;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreDoingCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerFilterType> IgnoreFilter;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBObjectMaterialData> ConditionObjectMaterial;
    
    UPROPERTY()
    FVector VolumeBoxExtent;
    
    UPROPERTY(EditAnywhere)
    float BlockExtraSprintDuration;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ZoneTrigger();

};

