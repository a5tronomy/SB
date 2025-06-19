#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceTheaterSubtitleSectionData.h"
#include "SBLevelSequenceTheaterSubtitleTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterSubtitleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceTheaterSubtitleSectionData SectionData;
    
    UPROPERTY()
    FGuid SectionSignature;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceTheaterSubtitleTemplate();
};

