#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventActorAISectionData.h"
#include "SBLevelSequenceEventActorAITemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventActorAITemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventActorAISectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventActorAITemplate();
};

