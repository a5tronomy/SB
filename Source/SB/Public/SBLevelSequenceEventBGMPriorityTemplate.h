#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventBGMPrioritySectionData.h"
#include "SBLevelSequenceEventBGMPriorityTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventBGMPriorityTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventBGMPrioritySectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventBGMPriorityTemplate();
};

