#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeZone.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeZone : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEvent EventZone;
    
    USBQuestActionTypeZone();

};

