#pragma once
#include "CoreMinimal.h"
#include "SBQuestNode.h"
#include "SBQuestWarpNodeData.h"
#include "SBQuestWarpNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestWarpNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText EditorDescription;
    
    UPROPERTY(EditAnywhere)
    FSBQuestWarpNodeData WarpWhenComplete;
    
    USBQuestWarpNode();

};

