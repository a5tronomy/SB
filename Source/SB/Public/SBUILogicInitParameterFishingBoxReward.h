#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterFishingBoxReward.generated.h"

USTRUCT()
struct FSBUILogicInitParameterFishingBoxReward : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName FishAlias;
    
    UPROPERTY()
    TArray<FName> BoxRewardItemAliasArray;
    
    UPROPERTY()
    TArray<int32> BoxRewardItemCountArray;
    
    SB_API FSBUILogicInitParameterFishingBoxReward();
};

