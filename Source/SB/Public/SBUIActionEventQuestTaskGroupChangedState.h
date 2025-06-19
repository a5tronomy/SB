#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskGroupState.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventQuestTaskGroupChangedState.generated.h"

USTRUCT()
struct FSBUIActionEventQuestTaskGroupChangedState : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TaskGroupAlias;
    
    UPROPERTY()
    TEnumAsByte<ESBQuestTaskGroupState> TaskGroupState;
    
    SB_API FSBUIActionEventQuestTaskGroupChangedState();
};

