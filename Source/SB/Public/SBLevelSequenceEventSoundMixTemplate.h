#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventSoundMixSectionData.h"
#include "SBLevelSequenceEventSoundMixTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventSoundMixTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventSoundMixSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventSoundMixTemplate();
};

