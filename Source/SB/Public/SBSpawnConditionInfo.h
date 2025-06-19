#pragma once
#include "CoreMinimal.h"
#include "SBAliasAchievement.h"
#include "SBSpawnConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSpawnConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bNotOperator;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressCount;
    
    UPROPERTY(EditAnywhere)
    FSBAliasAchievement CheckAchievement;
    
    SB_API FSBSpawnConditionInfo();
};

