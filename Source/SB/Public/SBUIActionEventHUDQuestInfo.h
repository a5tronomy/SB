#pragma once
#include "CoreMinimal.h"
#include "ESBQuestType.h"
#include "ESBUIHUDQuestEventType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDQuestInfo.generated.h"

USTRUCT()
struct FSBUIActionEventHUDQuestInfo : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUIHUDQuestEventType EventType;
    
    UPROPERTY()
    TEnumAsByte<ESBQuestType> QuestType;
    
    UPROPERTY()
    FName QuestAlias;
    
    UPROPERTY()
    FName TaskGroupAlias;
    
    UPROPERTY()
    FName TaskAlias;
    
    SB_API FSBUIActionEventHUDQuestInfo();
};

