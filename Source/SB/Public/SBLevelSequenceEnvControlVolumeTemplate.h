#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEnvControlVolumeSectionData.h"
#include "SBLevelSequenceEnvControlVolumeTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEnvControlVolumeTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEnvControlVolumeSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEnvControlVolumeTemplate();
};

