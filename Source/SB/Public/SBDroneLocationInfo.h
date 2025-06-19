#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBDroneLocationInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBDroneLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BaseSocket;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    int32 AdditivePoint;
    
    FSBDroneLocationInfo();
};

