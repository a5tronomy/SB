#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterReactionTriggerSectionData.h"
#include "SBLevelSequenceTheaterReactionTriggerTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterReactionTriggerTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterReactionTriggerSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterReactionTriggerTemplate();
};

