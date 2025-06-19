#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterFinishEve.generated.h"

USTRUCT()
struct FSBUILogicInitParameterFinishEve : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString EndingTag;
    
    SB_API FSBUILogicInitParameterFinishEve();
};

