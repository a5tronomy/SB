#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ShopLimitedItemHistoryObject.h"
#include "SBSaveGameData_ShopLimitedItemHistoryArray.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ShopLimitedItemHistoryArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ShopLimitedItemHistoryObject> Array;
    
    SB_API FSBSaveGameData_ShopLimitedItemHistoryArray();
};

