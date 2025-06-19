#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterCanGain.generated.h"

USTRUCT()
struct FSBUILogicInitParameterCanGain : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CanAlias;
    
    UPROPERTY()
    float InputDelayTime;
    
    SB_API FSBUILogicInitParameterCanGain();
};

