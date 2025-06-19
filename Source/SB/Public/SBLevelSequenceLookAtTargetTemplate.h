#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceLookAtTargetSectionData.h"
#include "SBLevelSequenceLookAtTargetTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceLookAtTargetTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceLookAtTargetSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceLookAtTargetTemplate();
};

