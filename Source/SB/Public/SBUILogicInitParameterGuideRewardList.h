#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterGuideRewardListData.h"
#include "SBUILogicInitParameterGuideRewardList.generated.h"

USTRUCT()
struct FSBUILogicInitParameterGuideRewardList : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBUILogicInitParameterGuideRewardListData> ItemArray;
    
    UPROPERTY()
    bool bInputPress;
    
    SB_API FSBUILogicInitParameterGuideRewardList();
};

