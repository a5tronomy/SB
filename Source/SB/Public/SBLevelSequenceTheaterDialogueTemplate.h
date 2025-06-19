#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterDialogueSectionData.h"
#include "SBLevelSequenceTheaterDialogueTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterDialogueTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterDialogueSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterDialogueTemplate();
};

