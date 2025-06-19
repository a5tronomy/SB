#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventZoneControlTarget.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasZone.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventZoneControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventZoneControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZone Zone;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventZoneControlTarget> ControlType;
    
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
    
    USBToolDataNode_EventZoneControl();

};

