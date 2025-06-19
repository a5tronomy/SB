#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceSplineCineCamTrackingSectionData.h"
#include "SBLevelSequenceSplineCineCamTrackingTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceSplineCineCamTrackingTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceSplineCineCamTrackingSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceSplineCineCamTrackingTemplate();
};

