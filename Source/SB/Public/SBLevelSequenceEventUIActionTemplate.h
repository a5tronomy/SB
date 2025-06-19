#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventUIActionSectionData.h"
#include "SBLevelSequenceEventUIActionTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventUIActionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventUIActionSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventUIActionTemplate();
};

