#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeZoneControlNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeZoneControlNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventZoneControl;
    
    USBQuestActionTypeZoneControlNode();

};

