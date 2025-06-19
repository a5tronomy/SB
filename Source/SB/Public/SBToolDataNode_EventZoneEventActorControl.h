#pragma once
#include "CoreMinimal.h"
#include "ESBEventZoneEventActorControlType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventZoneEventActorControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventZoneEventActorControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEventZoneEventActorControlType> ZoneEventActorControlType;
    
    UPROPERTY(EditAnywhere)
    float DestructionTime;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDestruction;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    USBToolDataNode_EventZoneEventActorControl();

};

