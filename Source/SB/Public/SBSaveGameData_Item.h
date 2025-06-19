#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ItemObject.h"
#include "SBSaveGameData_PocketObject.h"
#include "SBSaveGameData_WorldEventItem.h"
#include "SBSaveGameData_Item.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Item {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ItemObject> Inventory;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_PocketObject> WorldPocketMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_WorldEventItem> WorldEventItemMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_PocketObject> ZonePocketMap;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> ItemOtaineSet;
    
    UPROPERTY(EditAnywhere)
    int32 HealItemSlotIndex;
    
    UPROPERTY(EditAnywhere)
    int32 UtilItemSlotIndex;
    
    UPROPERTY(EditAnywhere)
    int32 BulletItemSlotIndex;
    
    UPROPERTY(EditAnywhere)
    int32 FishingItemSlotIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> BulletSubIndexArray;
    
    SB_API FSBSaveGameData_Item();
};

