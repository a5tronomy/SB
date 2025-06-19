#pragma once
#include "CoreMinimal.h"
#include "SBDataNodeBase.h"
#include "SBQuestNode.generated.h"

class USBQuestNode;

UCLASS(Abstract, EditInlineNew)
class SB_API USBQuestNode : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<USBQuestNode*> ChildNodes;
    
    USBQuestNode();

};

