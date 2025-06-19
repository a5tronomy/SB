#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveBase.h"
#include "SBSaveGameData_Achievement.h"
#include "SBSaveGameData_AcquisitionSkill.h"
#include "SBSaveGameData_Actor.h"
#include "SBSaveGameData_ActorStorage.h"
#include "SBSaveGameData_DebugHistoryLog.h"
#include "SBSaveGameData_Effect.h"
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
#include "SBSaveVersionInfo.h"
#include "SBSaveGame.generated.h"

UCLASS()
class SB_API USBSaveGame : public USBSaveBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SaveFileVersion;
    
    UPROPERTY(VisibleAnywhere)
    bool bEnableSnapShot;
    
    UPROPERTY(VisibleAnywhere)
    FName SnapShotZoneAlias;
    
    UPROPERTY(EditAnywhere)
    int64 NewGameCreateTime;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FSBSaveVersionInfo VersionInfo;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_Actor> DataMap_SBActor;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_Effect> DataMap_SBEffect;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_Quest> DataMap_SBQuest;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_Env> DataMap_SBEnv;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_Item> DataMap_SBItem;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_AcquisitionSkill> DataMap_SBAcquisitionSkill;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_Achievement SBAchievement;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_FishingLogBook SBFishingLogBook;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> DataMap_float;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> DataMap_FString;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> DataMap_int32;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int64> DataMap_int64;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> DataMap_FVector;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_ShopLimitedItemHistory SBShopHistory;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_ActorStorage LevelActorStorage;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_Theater TheaterStorage;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_UI UIStorage;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_PlayRecordData GamePlayProgressRecordData;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_Hint SBHint;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_TrainingRoom TrainingRoomData;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_NewGamePlusBaseInfo NewGamePlusBaseData;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_EventGiftInfo EventGiftInfo;
    
    UPROPERTY(VisibleAnywhere)
    FSBSaveGameData_Nikke NikkeStageInfo;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_DebugHistoryLog> DebugHistoryLogMap;
    
public:
    USBSaveGame();

};

