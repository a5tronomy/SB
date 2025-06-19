#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventTheater.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeTheaterNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeTheaterNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasEventTheater EventTheater;
    
    USBQuestActionTypeTheaterNode();

};

