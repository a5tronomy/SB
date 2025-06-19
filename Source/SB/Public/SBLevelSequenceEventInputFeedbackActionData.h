#pragma once
#include "CoreMinimal.h"
#include "ESBTheaterSequenceEventType.h"
#include "FSBLevelSequenceEventInputFeedbackActionType.h"
#include "SBLevelSequenceEventInputFeedbackActionData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventInputFeedbackActionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTheaterSequenceEventType> SequenceEventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<FSBLevelSequenceEventInputFeedbackActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachActorTagNames;
    
    SB_API FSBLevelSequenceEventInputFeedbackActionData();
};

