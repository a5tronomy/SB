#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeEnvControlNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeEnvControlNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventEnvControl;
    
    USBQuestActionTypeEnvControlNode();

};

