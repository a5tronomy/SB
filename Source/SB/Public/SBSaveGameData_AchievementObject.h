#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_AchievementObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_AchievementObject {
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
    
    SB_API FSBSaveGameData_AchievementObject();
};

