#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicType.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterHairSalon.generated.h"

USTRUCT()
struct FSBUILogicInitParameterHairSalon : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBUILogicType> BackUIType;
    
    SB_API FSBUILogicInitParameterHairSalon();
};

