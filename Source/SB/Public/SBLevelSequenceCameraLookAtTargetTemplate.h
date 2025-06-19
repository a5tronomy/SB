#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceCameraLookAtTargetSectionData.h"
#include "SBLevelSequenceCameraLookAtTargetTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceCameraLookAtTargetTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceCameraLookAtTargetSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceCameraLookAtTargetTemplate();
};

