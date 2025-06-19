#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterGuideUnlockMode.generated.h"

USTRUCT()
struct FSBUILogicInitParameterGuideUnlockMode : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TitleKey;
    
    SB_API FSBUILogicInitParameterGuideUnlockMode();
};

