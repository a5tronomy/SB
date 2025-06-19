#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterNikkeMinigameResult.generated.h"

USTRUCT()
struct FSBUILogicInitParameterNikkeMinigameResult : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsCleared;
    
    UPROPERTY()
    bool IsFirstCleared;
    
    UPROPERTY()
    bool IsHighRecorded;
    
    UPROPERTY()
    FString NikkeStageAlias;
    
    UPROPERTY()
    FString LostArticleAlias;
    
    UPROPERTY()
    float BestPlayTime;
    
    UPROPERTY()
    float CurrentPlayTime;
    
    UPROPERTY()
    int32 CurrentTotalDamage;
    
    SB_API FSBUILogicInitParameterNikkeMinigameResult();
};

