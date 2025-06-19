#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ZoneEventActorStorage.h"
#include "SBSaveGameData_WorldContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_WorldContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WorldAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEventActorStorage> ZoneEventActorStorageList;
    
    SB_API FSBSaveGameData_WorldContainer();
};

