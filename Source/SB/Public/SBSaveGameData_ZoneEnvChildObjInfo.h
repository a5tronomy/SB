#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZoneEnvChildObjectType.h"
#include "SBSaveGameData_ZoneEnvChildObjInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEnvChildObjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ObjectName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvChildObjectType> ObjectType;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    SB_API FSBSaveGameData_ZoneEnvChildObjInfo();
};

