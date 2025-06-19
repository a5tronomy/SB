#pragma once
#include "CoreMinimal.h"
#include "SBItemPocket.h"
#include "SBSaveGameData_PocketObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_PocketObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBItemPocket> SpawnPocketArray;
    
    SB_API FSBSaveGameData_PocketObject();
};

