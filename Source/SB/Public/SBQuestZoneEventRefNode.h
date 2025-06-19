#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBQuestNode.h"
#include "SBQuestZoneEventRefNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestZoneEventRefNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEvent ZoneEvent;
    
    USBQuestZoneEventRefNode();

};

