#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ShopFriendShip.h"
#include "SBSaveGameData_ShopLimitedItemHistoryArray.h"
#include "SBSaveGameData_ShopLimitedItemHistory.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ShopLimitedItemHistory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_ShopLimitedItemHistoryArray> Purchase;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_ShopFriendShip> FriendShip;
    
    SB_API FSBSaveGameData_ShopLimitedItemHistory();
};

