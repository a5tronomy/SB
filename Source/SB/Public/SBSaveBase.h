#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SBSaveGameData_OnlineAccountInfo.h"
#include "SBSaveVersionInfo.h"
#include "SBSaveBase.generated.h"

UCLASS()
class SB_API USBSaveBase : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FSBSaveVersionInfo SaveFileVersionInfo;
    
    UPROPERTY()
    FSBSaveGameData_OnlineAccountInfo OnlineAccountInfo;
    
public:
    USBSaveBase();

};

