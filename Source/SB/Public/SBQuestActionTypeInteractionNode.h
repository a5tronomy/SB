#pragma once
#include "CoreMinimal.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeInteractionNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeInteractionNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter LevelTargetFilter;
    
    USBQuestActionTypeInteractionNode();

};

