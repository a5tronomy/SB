#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasAchievement.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionAchievement.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionAchievement : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAchievement AchievementAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY()
    bool ResultValue;
    
    USBInteractionNode_ConditionAchievement();

};

