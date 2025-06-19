#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterTrialShopApp.generated.h"

USTRUCT()
struct FSBUILogicInitParameterTrialShopApp : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bFinishTrial;
    
    SB_API FSBUILogicInitParameterTrialShopApp();
};

