#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionQuestEventType.h"
#include "SBAliasQuestTask.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_QuestEvent.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_QuestEvent : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionQuestEventType> QuestEventType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasQuestTask QuestTaskAlias;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_QuestEvent();

};

