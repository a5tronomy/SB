#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceVisibilityTagTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceVisibilityTagTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString VisibilityTag;
    
public:
    SB_API FSBLevelSequenceVisibilityTagTemplate();
};

