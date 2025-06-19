#pragma once
#include "CoreMinimal.h"
#include "ESBGameDifficultyType.h"
#include "ESBGameOptionActionAssistType.h"
#include "SBSaveGameData_Achievement.h"
#include "SBSaveGameData_AcquisitionSkill.h"
#include "SBSaveGameData_Actor.h"
#include "SBSaveGameData_ActorStorage.h"
#include "SBSaveGameData_DebugHistoryLog.h"
#include "SBSaveGameData_Effect.h"
#include "SBSaveGameData_EndingInfo.h"
#include "SBSaveGameData_Env.h"
#include "SBSaveGameData_EventGiftInfo.h"
#include "SBSaveGameData_FishingLogBook.h"
#include "SBSaveGameData_Hint.h"
#include "SBSaveGameData_Item.h"
#include "SBSaveGameData_NewGamePlusBaseInfo.h"
#include "SBSaveGameData_Nikke.h"
#include "SBSaveGameData_PlayRecordData.h"
#include "SBSaveGameData_Quest.h"
#include "SBSaveGameData_ShopLimitedItemHistory.h"
#include "SBSaveGameData_Theater.h"
#include "SBSaveGameData_TrainingRoom.h"
#include "SBSaveGameData_UI.h"
#include "SBSaveGameDataStorage.generated.h"

USTRUCT()
struct FSBSaveGameDataStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bValidSaveData;
    
    UPROPERTY(EditAnywhere)
    ESBGameDifficultyType GameDifficulty;
    
    UPROPERTY(EditAnywhere)
    ESBGameOptionActionAssistType ActionAssist;
    
    UPROPERTY(EditAnywhere)
    int32 NewGamePlusPlayCount;
    
    UPROPERTY(EditAnywhere)
    bool bNoticedNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSnapShot;
    
    UPROPERTY(EditAnywhere)
    bool bFirstTimeTrainingRoom;
    
    UPROPERTY(EditAnywhere)
    FName SnapShotZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FString MapName;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTime;
    
    UPROPERTY(EditAnywhere)
    FName LastHitCampAlias;
    
    UPROPERTY(EditAnywhere)
    FName TurntableAlias;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Actor ActorSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Effect EffectSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Quest QuestSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Env EnvSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Item ItemSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_AcquisitionSkill AcquisitionSkillSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Achievement AchievementSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_FishingLogBook FishingLogBookSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_ShopLimitedItemHistory History;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_ActorStorage ActorStorages;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Theater TheaterData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_UI UIData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_PlayRecordData GamePlayProgressRecordData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Hint HintSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_TrainingRoom TrainingRoomData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_EndingInfo EndingInfo;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_NewGamePlusBaseInfo NewGamePlusBaseInfo;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_EventGiftInfo EventGiftInfo;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Nikke NikkeStageInfo;
    
    UPROPERTY(EditAnywhere)
    int64 NewGameCreateTime;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_DebugHistoryLog> DebugHistoryLogMap;
    
    SB_API FSBSaveGameDataStorage();
};

