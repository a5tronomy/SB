#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterAttachWidgetSectionData.h"
#include "SBLevelSequenceTheaterAttachWidgetTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterAttachWidgetTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterAttachWidgetSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterAttachWidgetTemplate();
};

