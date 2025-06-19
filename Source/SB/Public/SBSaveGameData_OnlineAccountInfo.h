#pragma once
#include "CoreMinimal.h"
#include "ESBOnlineStoreType.h"
#include "SBSaveGameData_OnlineAccountInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_OnlineAccountInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ESBOnlineStoreType OnlineStoreType;
    
    UPROPERTY()
    FString OnlineAccountID;
    
public:
    SB_API FSBSaveGameData_OnlineAccountInfo();
};

