#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ShopFriendShip.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ShopFriendShip {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TotalFriendShip;
    
    UPROPERTY(EditAnywhere)
    int32 FriendShipLevel;
    
    SB_API FSBSaveGameData_ShopFriendShip();
};

