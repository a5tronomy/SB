#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBDroneLocationInfoContainer.h"
#include "SBDroneLocationData.generated.h"

UCLASS()
class SB_API USBDroneLocationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LocationRadius;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentLocationPoint;
    
    UPROPERTY(EditAnywhere)
    int32 BlockingObjectPoint;
    
    UPROPERTY(EditAnywhere)
    int32 BlockingDronePoint;
    
    UPROPERTY(EditAnywhere)
    int32 LastSafetyLocationPointWhenNonBlock;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBDroneLocationInfoContainer> DroneLocationInfoMap;
    
    USBDroneLocationData();

};

