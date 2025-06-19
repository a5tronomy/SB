#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterCommonCurrency.generated.h"

USTRUCT()
struct FSBUILogicInitParameterCommonCurrency : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BindingCurrency;
    
    SB_API FSBUILogicInitParameterCommonCurrency();
};

