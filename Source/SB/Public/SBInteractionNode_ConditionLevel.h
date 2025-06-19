#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionLevel.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionLevel : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY(VisibleAnywhere)
    int32 CompareLevel;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_ConditionLevel();

};

