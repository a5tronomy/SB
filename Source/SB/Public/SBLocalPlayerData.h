#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_Achievement.h"
#include "SBSaveGameData_AcquisitionSkill.h"
#include "SBSaveGameData_Actor.h"
#include "SBSaveGameData_ActorStorage.h"
#include "SBSaveGameData_Effect.h"
#include "SBSaveGameData_FishingLogBook.h"
#include "SBSaveGameData_Hint.h"
#include "SBSaveGameData_Item.h"
#include "SBSaveGameData_ShopLimitedItemHistory.h"
#include "SBSaveGameData_Theater.h"
#include "SBSaveGameData_UI.h"
#include "SBLocalPlayerData.generated.h"

USTRUCT()
struct FSBLocalPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bValidData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Actor ActorData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Effect EffectData;
    
    UPROPERTY(Transient)
    int32 TurntableMusicIndex;
    
    UPROPERTY(Transient)
    FName TurntableSoundAlias;
    
    UPROPERTY(Transient)
    FSBSaveGameData_AcquisitionSkill AcquisitionSkillData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Achievement AchievementData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_FishingLogBook FishingLogBookData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_ShopLimitedItemHistory ShopSaveData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_ActorStorage ActorStorageData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Theater TheaterData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_UI UIData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Item ItemData;
    
    UPROPERTY(Transient)
    FSBSaveGameData_Hint HintSaveData;
    
    SB_API FSBLocalPlayerData();
};

