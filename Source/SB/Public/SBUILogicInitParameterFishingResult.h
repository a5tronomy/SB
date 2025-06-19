#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterFishingResult.generated.h"

USTRUCT()
struct FSBUILogicInitParameterFishingResult : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName FishAlias;
    
    UPROPERTY()
    float FishWeight;
    
    UPROPERTY()
    bool bNewRecord;
    
    UPROPERTY()
    bool bShowFishImage;
    
    UPROPERTY()
    TArray<FName> BoxRewardItemAliasArray;
    
    UPROPERTY()
    TArray<int32> BoxRewardItemCountArray;
    
    SB_API FSBUILogicInitParameterFishingResult();
};

