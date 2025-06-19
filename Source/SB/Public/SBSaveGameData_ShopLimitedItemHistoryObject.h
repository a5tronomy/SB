#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ShopLimitedItemHistoryObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ShopLimitedItemHistoryObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 PurchaseCount;
    
    SB_API FSBSaveGameData_ShopLimitedItemHistoryObject();
};

