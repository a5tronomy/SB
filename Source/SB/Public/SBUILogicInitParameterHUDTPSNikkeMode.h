#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterHUDTPSNikkeMode.generated.h"

USTRUCT()
struct FSBUILogicInitParameterHUDTPSNikkeMode : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StageAlias;
    
    SB_API FSBUILogicInitParameterHUDTPSNikkeMode();
};

