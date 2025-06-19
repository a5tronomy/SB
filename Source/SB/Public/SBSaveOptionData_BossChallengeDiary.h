#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengePresetType.h"
#include "ESBGameDifficultyType.h"
#include "SBSaveOptionData_BossChallengeDiary.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_BossChallengeDiary {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bClear;
    
    UPROPERTY(EditAnywhere)
    double TotalPlayTime;
    
    UPROPERTY(EditAnywhere)
    int64 BossClearDate;
    
    UPROPERTY(EditAnywhere)
    ESBGameDifficultyType DifficultyType;
    
    UPROPERTY(EditAnywhere)
    ESBBossChallengePresetType BossChallengePresetType;
    
    UPROPERTY(EditAnywhere)
    bool bEquipSuitItem;
    
    UPROPERTY(EditAnywhere)
    float PlayerAccumulatedDamage;
    
    UPROPERTY(EditAnywhere)
    int32 PrefectParryCount;
    
    UPROPERTY(EditAnywhere)
    int32 PerfectDodgeCount;
    
    UPROPERTY(EditAnywhere)
    int32 TachyModePlayCount;
    
    UPROPERTY(EditAnywhere)
    int32 UseBulletCount;
    
    UPROPERTY(EditAnywhere)
    int32 UseGrenadeCategoryItemCount;
    
    UPROPERTY(EditAnywhere)
    int32 UsePositionCategoryItemCount;
    
    SB_API FSBSaveOptionData_BossChallengeDiary();
};

