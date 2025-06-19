#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_FishingLog.h"
#include "SBSaveGameData_FishingLogBook.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_FishingLogBook {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_FishingLog> FishingLogList;
    
    SB_API FSBSaveGameData_FishingLogBook();
};

