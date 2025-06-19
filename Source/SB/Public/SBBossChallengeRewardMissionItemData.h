#pragma once
#include "CoreMinimal.h"
#include "SBBossChallengeRewardMissionItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBBossChallengeRewardMissionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TitleText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClear;
    
    SB_API FSBBossChallengeRewardMissionItemData();
};

