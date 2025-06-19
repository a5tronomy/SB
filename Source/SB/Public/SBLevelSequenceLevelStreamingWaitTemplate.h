#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceLevelStreamingWaitSectionData.h"
#include "SBLevelSequenceLevelStreamingWaitTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceLevelStreamingWaitTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceLevelStreamingWaitSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
    UPROPERTY()
    FGuid TimerGuid;
    
public:
    SB_API FSBLevelSequenceLevelStreamingWaitTemplate();
};

