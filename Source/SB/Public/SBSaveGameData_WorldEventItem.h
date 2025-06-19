#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ZoneEventItemStorage.h"
#include "SBSaveGameData_WorldEventItem.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_WorldEventItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WorldAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEventItemStorage> EventSpawnItemList;
    
    SB_API FSBSaveGameData_WorldEventItem();
};

