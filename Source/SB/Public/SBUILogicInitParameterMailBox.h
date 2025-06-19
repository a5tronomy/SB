#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterMailBox.generated.h"

USTRUCT()
struct FSBUILogicInitParameterMailBox : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MailBoxEnvSpawnAlias;
    
    SB_API FSBUILogicInitParameterMailBox();
};

