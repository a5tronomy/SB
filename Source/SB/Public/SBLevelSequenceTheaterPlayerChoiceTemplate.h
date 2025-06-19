#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterPlayerChoiceSectionData.h"
#include "SBLevelSequenceTheaterPlayerChoiceTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterPlayerChoiceTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterPlayerChoiceSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterPlayerChoiceTemplate();
};

