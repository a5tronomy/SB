#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypePlayLevelSeqNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypePlayLevelSeqNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventLevelSeq;
    
    USBQuestActionTypePlayLevelSeqNode();

};

