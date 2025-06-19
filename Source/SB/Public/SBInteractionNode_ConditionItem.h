#pragma once
#include "CoreMinimal.h"
#include "ESBConditionItemCheckRangeType.h"
#include "ESBEquation.h"
#include "SBAliasItem.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionItem : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasItem ItemAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY(VisibleAnywhere)
    int32 ItemAmount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionItemCheckRangeType> CheckRange;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_ConditionItem();

};

