#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "ESBZoneEventEventorType.h"
#include "ESBZoneEventItemType.h"
#include "ESBZoneObjectSaveType.h"
#include "ESBZoneSpawnType.h"
#include "SBAliasAchievement.h"
#include "SBAliasItem.h"
#include "SBAliasItemSpawn.h"
#include "SBAliasWorld.h"
#include "SBAliasZone.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ZoneEventItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEventItem : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY()
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    FSBAliasItem SpawnItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnItemCount;
    
    UPROPERTY(EditAnywhere)
    FSBAliasItemSpawn SpawnInfoAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventItemType> ControlType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneSpawnType> SpawnType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasWorld SpawnWorld;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone SpawnZone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> SpawnItemBucketType;
    
    UPROPERTY()
    bool bEnableSave;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasAchievement> CheckAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> AcquireZoneEvents;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrideAutoInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bAutoInteraction;
    
    UPROPERTY(EditAnywhere)
    float AutoInteractionDist;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ZoneEventItem();

};

