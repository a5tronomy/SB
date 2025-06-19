#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_EnhanceFlagStateInfo.h"
#include "SBSaveGameData_ExospineEnhanceInfo.h"
#include "SBSaveGameData_ActorItemEnhanceState.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ActorItemEnhanceState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> NanosuitEnhanceStateMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> DronEnhanceStateMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_ExospineEnhanceInfo> ExospineEnhanceStateMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_EnhanceFlagStateInfo> FlagStateInfoMap;
    
    UPROPERTY(EditAnywhere)
    bool bEnhanceNanosuit;
    
    UPROPERTY(EditAnywhere)
    bool bEnhanceExospine;
    
    UPROPERTY(EditAnywhere)
    bool bEnhanceDron;
    
    SB_API FSBSaveGameData_ActorItemEnhanceState();
};

