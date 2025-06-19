#pragma once
#include "CoreMinimal.h"
#include "SBAchievementProperty.generated.h"

USTRUCT()
struct FSBAchievementProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    uint32 ProgressValue;
    
    UPROPERTY()
    bool bRecievedReward;
    
    SB_API FSBAchievementProperty();
};

