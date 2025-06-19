#pragma once
#include "CoreMinimal.h"
#include "SBAutoGameSavePhase.generated.h"

USTRUCT(BlueprintType)
struct FSBAutoGameSavePhase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float RemainNextPhaseTime;
    
    UPROPERTY()
    bool bDonePreSave;
    
    UPROPERTY()
    bool bDoneRealSave;
    
    UPROPERTY()
    float CurrentPhaseTime;
    
    UPROPERTY()
    FString SaveSlotName;
    
    SB_API FSBAutoGameSavePhase();
};

