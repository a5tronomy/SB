#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ActorStorageProperty.h"
#include "SBSaveGameData_ActorStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ActorStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_ActorStorageProperty> ActorStorageMap;
    
    SB_API FSBSaveGameData_ActorStorage();
};

