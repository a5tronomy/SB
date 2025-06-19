#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventSoundEventSectionData.h"
#include "SBLevelSequenceEventSoundEventTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventSoundEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventSoundEventSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventSoundEventTemplate();
};

