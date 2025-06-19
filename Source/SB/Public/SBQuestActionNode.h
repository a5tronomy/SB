#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventType.h"
#include "SBQuestNode.h"
#include "SBQuestActionNode.generated.h"

UCLASS(Abstract, EditInlineNew)
class SB_API USBQuestActionNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventType> EventType;
    
    USBQuestActionNode();

};

