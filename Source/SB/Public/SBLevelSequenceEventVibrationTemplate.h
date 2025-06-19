#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventVibrationSectionData.h"
#include "SBLevelSequenceEventVibrationTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventVibrationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventVibrationSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventVibrationTemplate();
};

