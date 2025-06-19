#pragma once
#include "CoreMinimal.h"
#include "ESBQuestState.h"
#include "SBAliasQuest.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionQuest.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionQuest : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasQuest QuestAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBQuestState> CompareState;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_ConditionQuest();

};

