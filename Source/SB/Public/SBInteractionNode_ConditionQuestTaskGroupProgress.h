#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasQuest.h"
#include "SBAliasQuestGroupTask.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionQuestTaskGroupProgress.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionQuestTaskGroupProgress : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasQuest QuestAlias;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasQuestGroupTask QuestTaskGroupAlias;
    
    UPROPERTY(VisibleAnywhere)
    int32 CompareProgressValue;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY()
    bool ResultValue;
    
    USBInteractionNode_ConditionQuestTaskGroupProgress();

};

