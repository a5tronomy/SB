#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeAIDecoratorNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeAIDecoratorNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventAIDecorator;
    
    USBQuestActionTypeAIDecoratorNode();

};

