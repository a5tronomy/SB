#pragma once
#include "CoreMinimal.h"
#include "AchievementData.generated.h"

USTRUCT(BlueprintType)
struct FAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AchievementAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 ProgressValue;
    
    UPROPERTY(EditAnywhere)
    bool bCompleted;
    
    UPROPERTY(EditAnywhere)
    bool bRecievedReward;
    
    SB_API FAchievementData();
};

