#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBTablePropertyBase.h"
#include "SBConditionGroupTableProperty.generated.h"

USTRUCT()
struct FSBConditionGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Conditions;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> GroupEq1;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> GroupEq2;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBConditionGroupTableProperty();
};

