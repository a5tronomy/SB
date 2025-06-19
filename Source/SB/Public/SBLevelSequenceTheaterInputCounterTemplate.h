#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventInputCounterSectionData.h"
#include "SBLevelSequenceTheaterInputCounterTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterInputCounterTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventInputCounterSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterInputCounterTemplate();
};

