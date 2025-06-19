#pragma once
#include "CoreMinimal.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeDespawnNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeDespawnNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter LevelTargetFilter;
    
    USBQuestActionTypeDespawnNode();

};

