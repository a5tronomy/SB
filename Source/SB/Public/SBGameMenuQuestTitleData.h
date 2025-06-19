#pragma once
#include "CoreMinimal.h"
#include "ESBQuestState.h"
#include "ESBUIQuestJournalTitleType.h"
#include "ESBUIRedDotState.h"
#include "SBGameMenuQuestTitleData.generated.h"

USTRUCT()
struct FSBGameMenuQuestTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText QuestTitle;
    
    UPROPERTY(EditAnywhere)
    bool bTracking;
    
    UPROPERTY(EditAnywhere)
    FName QuestAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIQuestJournalTitleType> QuestType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestState> QuestState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    SB_API FSBGameMenuQuestTitleData();
};

