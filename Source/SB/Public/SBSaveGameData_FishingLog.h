#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_FishingLog.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_FishingLog {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName FishAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 CatchCount;
    
    UPROPERTY(EditAnywhere)
    float MaxWeightRecord;
    
    SB_API FSBSaveGameData_FishingLog();
};

