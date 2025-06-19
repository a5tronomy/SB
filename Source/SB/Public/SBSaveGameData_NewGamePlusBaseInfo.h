#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_Achievement.h"
#include "SBSaveGameData_AcquisitionSkill.h"
#include "SBSaveGameData_Actor.h"
#include "SBSaveGameData_EventGiftInfo.h"
#include "SBSaveGameData_FishingLogBook.h"
#include "SBSaveGameData_Item.h"
#include "SBSaveGameData_Nikke.h"
#include "SBSaveGameData_Quest.h"
#include "SBSaveGameData_Theater.h"
#include "SBSaveGameData_TrainingRoom.h"
#include "SBSaveGameData_UI.h"
#include "SBSaveGameData_ZoneContainer.h"
#include "SBSaveGameData_NewGamePlusBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_NewGamePlusBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    int32 EndingCount;
    
    UPROPERTY(EditAnywhere)
    int32 NoticeNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_KillElder;
    
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_KillLily;
    
    UPROPERTY(EditAnywhere)
    int64 EndingTimeStamp_SaveLily;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_TrainingRoom TrainingRoomData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Actor ActorSaveData;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_ZoneContainer> ZoneContainerMap;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_AcquisitionSkill AcquisitionSkill;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Achievement AchievementSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_UI UISaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Item ItemSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_FishingLogBook FishingLogBookSaveData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Theater TheaterData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_EventGiftInfo EventGiftData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Nikke NikkeStageInfo;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_Quest QuestData;
    
    SB_API FSBSaveGameData_NewGamePlusBaseInfo();
};

