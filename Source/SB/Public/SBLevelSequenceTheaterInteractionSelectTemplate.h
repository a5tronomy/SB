#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterInteractionSelectSectionData.h"
#include "SBLevelSequenceTheaterInteractionSelectTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterInteractionSelectTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterInteractionSelectSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterInteractionSelectTemplate();
};

