#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicPopupInitParameter.generated.h"

USTRUCT()
struct FSBUILogicPopupInitParameter : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    SB_API FSBUILogicPopupInitParameter();
};

