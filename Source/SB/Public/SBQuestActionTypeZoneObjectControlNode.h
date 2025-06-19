#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeZoneObjectControlNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeZoneObjectControlNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventObjControl;
    
    USBQuestActionTypeZoneObjectControlNode();

};

