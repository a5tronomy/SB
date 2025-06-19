#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBWorldObjectType.h"
#include "ESBZoneObjectSaveType.h"
#include "SBSaveGameData_WorldObjectStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_WorldObjectStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName UniqueKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBWorldObjectType> ObjectType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    FString JsonInfo;
    
    UPROPERTY(EditAnywhere)
    int32 EffectVolumeDeadCount;
    
    SB_API FSBSaveGameData_WorldObjectStorage();
};

