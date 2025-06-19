#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventQuestTaskUpdate.generated.h"

USTRUCT()
struct FSBUIActionEventQuestTaskUpdate : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TaskAlias;
    
    UPROPERTY()
    FName QuestAlias;
    
    UPROPERTY()
    int32 CurrentValue;
    
    SB_API FSBUIActionEventQuestTaskUpdate();
};

