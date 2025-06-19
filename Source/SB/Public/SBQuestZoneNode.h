#pragma once
#include "CoreMinimal.h"
#include "SBAliasZone.h"
#include "SBQuestNode.h"
#include "SBQuestZoneNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestZoneNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasZone Zone;
    
    USBQuestZoneNode();

};

