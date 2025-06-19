#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventBGMSectionData.h"
#include "SBLevelSequenceEventBGMTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventBGMTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventBGMSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventBGMTemplate();
};

