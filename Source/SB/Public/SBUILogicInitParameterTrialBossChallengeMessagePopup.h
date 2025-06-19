#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterTrialBossChallengeMessagePopup.generated.h"

USTRUCT()
struct FSBUILogicInitParameterTrialBossChallengeMessagePopup : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bOnlyYes;
    
    SB_API FSBUILogicInitParameterTrialBossChallengeMessagePopup();
};

