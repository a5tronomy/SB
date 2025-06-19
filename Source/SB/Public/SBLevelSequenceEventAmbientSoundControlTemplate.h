#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventAmbientSoundControlSectionData.h"
#include "SBLevelSequenceEventAmbientSoundControlTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventAmbientSoundControlTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventAmbientSoundControlSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventAmbientSoundControlTemplate();
};

