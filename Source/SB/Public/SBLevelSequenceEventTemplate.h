#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    SB_API FSBLevelSequenceEventTemplate();
};

