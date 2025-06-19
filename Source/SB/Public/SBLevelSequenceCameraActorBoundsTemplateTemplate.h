#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceCameraActorBoundsTemplateSectionData.h"
#include "SBLevelSequenceCameraActorBoundsTemplateTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceCameraActorBoundsTemplateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceCameraActorBoundsTemplateSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceCameraActorBoundsTemplateTemplate();
};

