#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventInputFeedbackSectionData.h"
#include "SBLevelSequenceTheaterInputFeedbackTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterInputFeedbackTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventInputFeedbackSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterInputFeedbackTemplate();
};

