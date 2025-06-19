#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZoneObjectSaveType.h"
#include "SBSaveGameData_ZoneEventItemStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEventItemStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FVector ActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    bool bGetStorage;
    
    SB_API FSBSaveGameData_ZoneEventItemStorage();
};

