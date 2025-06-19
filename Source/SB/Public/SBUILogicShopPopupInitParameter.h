#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicShopPopupInitParameter.generated.h"

USTRUCT()
struct FSBUILogicShopPopupInitParameter : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    SB_API FSBUILogicShopPopupInitParameter();
};

