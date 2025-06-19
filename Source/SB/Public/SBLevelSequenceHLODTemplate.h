#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceHLODTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceHLODTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneBoolChannel HLOD;
    
public:
    SB_API FSBLevelSequenceHLODTemplate();
};

