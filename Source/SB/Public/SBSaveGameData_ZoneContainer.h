#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBSaveGameData_WorldObjectStorage.h"
#include "SBSaveGameData_ZoneEnvStorage.h"
#include "SBSaveGameData_ZoneEventActorStorage.h"
#include "SBSaveGameData_ZoneEventItemStorage.h"
#include "SBSaveGameData_ZoneNpcStorage.h"
#include "SBSaveGameData_ZoneTriggerStorage.h"
#include "SBSaveGameData_ZoneContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDirty;
    
    UPROPERTY(EditAnywhere)
    bool bZoneReset;
    
    UPROPERTY(EditAnywhere)
    FName ZoneAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> ZoneObjectState;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEnvStorage> ZoneEnvStorageList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneNpcStorage> ZoneNpcStorageList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneTriggerStorage> ZoneTriggerStorageList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEventItemStorage> ZoneEventItemStorageList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEventActorStorage> ZoneEventActorStorageList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_WorldObjectStorage> WorldObjectStorageMap;
    
    SB_API FSBSaveGameData_ZoneContainer();
};

