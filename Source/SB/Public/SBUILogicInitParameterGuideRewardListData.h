#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameterGuideRewardListData.generated.h"

USTRUCT(BlueprintType)
struct FSBUILogicInitParameterGuideRewardListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ItemAlias;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool Core;
    
    SB_API FSBUILogicInitParameterGuideRewardListData();
};

