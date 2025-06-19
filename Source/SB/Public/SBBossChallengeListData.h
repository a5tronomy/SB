#pragma once
#include "CoreMinimal.h"
#include "ESBGameDifficultyType.h"
#include "SBBossChallengeListData.generated.h"

USTRUCT()
struct FSBBossChallengeListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText BossNameText;
    
    UPROPERTY(EditAnywhere)
    FText AreaNameText;
    
    UPROPERTY(EditAnywhere)
    FString ThumbnailIconImagePath;
    
    UPROPERTY(EditAnywhere)
    ESBGameDifficultyType Difficulty;
    
    UPROPERTY(EditAnywhere)
    bool bClear;
    
    SB_API FSBBossChallengeListData();
};

