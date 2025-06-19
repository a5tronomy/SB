#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBSaveGameData_ZoneTriggerStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneTriggerStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> TriggerActivate;
    
    UPROPERTY(EditAnywhere)
    int32 DoingCount;
    
    UPROPERTY(EditAnywhere)
    FName TriggerAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    SB_API FSBSaveGameData_ZoneTriggerStorage();
};

