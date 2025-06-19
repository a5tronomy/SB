#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceCameraActorBoundsSectionData.h"
#include "SBLevelSequenceCameraActorBoundsTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceCameraActorBoundsTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceCameraActorBoundsSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceCameraActorBoundsTemplate();
};

