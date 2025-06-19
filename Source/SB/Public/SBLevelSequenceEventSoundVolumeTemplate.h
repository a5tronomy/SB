#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventSoundVolumeSectionData.h"
#include "SBLevelSequenceEventSoundVolumeTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventSoundVolumeTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventSoundVolumeSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventSoundVolumeTemplate();
};

