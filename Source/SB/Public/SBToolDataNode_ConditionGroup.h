#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ConditionGroup.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ConditionGroup : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasCondition> Conditions;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> GroupEq1;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> GroupEq2;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ConditionGroup();

};

