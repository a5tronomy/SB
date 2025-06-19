#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceAnimTrailSectionData.h"
#include "SBLevelSequenceAnimTrailTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceAnimTrailTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceAnimTrailSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceAnimTrailTemplate();
};

