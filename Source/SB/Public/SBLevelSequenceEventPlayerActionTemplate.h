#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventPlayerActionSectionData.h"
#include "SBLevelSequenceEventPlayerActionTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventPlayerActionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventPlayerActionSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventPlayerActionTemplate();
};

