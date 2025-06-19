#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EventGiftInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_EventGiftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> GiftList;
    
    SB_API FSBSaveGameData_EventGiftInfo();
};

