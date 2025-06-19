#pragma once
#include "CoreMinimal.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBQuestNode.h"
#include "SBQuestLevelTargetFilter.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestLevelTargetFilter : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter TargetFilter;
    
    USBQuestLevelTargetFilter();

};

