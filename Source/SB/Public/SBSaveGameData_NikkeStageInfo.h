#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_NikkeStageInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_NikkeStageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StageAlias;
    
    UPROPERTY(EditAnywhere)
    bool bVictory;
    
    UPROPERTY(EditAnywhere)
    uint32 PlayerAccumulatedDamage;
    
    UPROPERTY(EditAnywhere)
    float BestPlayTime;
    
    UPROPERTY(EditAnywhere)
    FName CompleteEntryEnv;
    
    SB_API FSBSaveGameData_NikkeStageInfo();
};

