#pragma once
#include "CoreMinimal.h"
#include "SBDroneLocationInfo.h"
#include "SBDroneLocationInfoContainer.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBDroneLocationInfoContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBDroneLocationInfo> LocationInfoArray;
    
    FSBDroneLocationInfoContainer();
};

