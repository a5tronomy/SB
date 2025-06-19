#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasItem.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionItemCharge.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionItemCharge : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasItem ItemAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_ConditionItemCharge();

};

