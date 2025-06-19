#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventItem.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeItemNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeItemNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasEventItem EventItem;
    
    USBQuestActionTypeItemNode();

};

