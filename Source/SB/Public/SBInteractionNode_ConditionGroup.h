#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionGroup.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionGroup : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasCondition> Conditions;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup1;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> GroupEq1;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup2;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> GroupEq2;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    USBInteractionNode_ConditionGroup();

};

