#pragma once
#include "CoreMinimal.h"
#include "ESBUIBossChallengeItemState.h"
#include "SBBossChallengeRewardItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBBossChallengeRewardItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESBUIBossChallengeItemState State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconAssetPath;
    
    SB_API FSBBossChallengeRewardItemData();
};

