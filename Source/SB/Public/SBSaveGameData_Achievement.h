#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_AchievementObject.h"
#include "SBSaveGameData_Achievement.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Achievement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_AchievementObject> AchievementList;
    
    SB_API FSBSaveGameData_Achievement();
};

