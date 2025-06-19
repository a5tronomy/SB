#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventInputFeedbackActionData.h"
#include "SBLevelSequenceEventInputFeedbackSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventInputFeedbackSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBLevelSequenceEventInputFeedbackActionData> ActionList;
    
    SB_API FSBLevelSequenceEventInputFeedbackSectionData();
};

