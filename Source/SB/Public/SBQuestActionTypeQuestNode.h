#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeQuestNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeQuestNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventQuest;
    
    USBQuestActionTypeQuestNode();

};

