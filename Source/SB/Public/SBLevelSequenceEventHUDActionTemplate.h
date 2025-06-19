#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventHUDActionSectionData.h"
#include "SBLevelSequenceEventHUDActionTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventHUDActionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventHUDActionSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventHUDActionTemplate();
};

