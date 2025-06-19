#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_Theater.h"
#include "SBSaveOptionData_ActorEquipmentDiary.h"
#include "SBSaveOptionData_BossChallengeStage.h"
#include "SBSaveOptionData_BossChallenge.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_BossChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveOptionData_BossChallengeStage> StageArray;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_ActorEquipmentDiary ActorEquipmentDiary;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Theater TheaterData;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeUnlock;
    
    UPROPERTY(EditAnywhere)
    bool bAvailableHardMode;
    
    UPROPERTY(EditAnywhere)
    bool bAvailableMaximumPreset;
    
    UPROPERTY(EditAnywhere)
    bool bAvailableNewGamePlusPreset;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeHardMode;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeNewGamePlusPreset;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeMissionClearReward;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeRavenMissionClearReward;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeMaanMissionClearReward;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeScarletMissionClearReward;
    
    SB_API FSBSaveOptionData_BossChallenge();
};

