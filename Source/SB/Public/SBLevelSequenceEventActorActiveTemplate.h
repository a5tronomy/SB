#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventActorActiveSectionData.h"
#include "SBLevelSequenceEventActorActiveTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventActorActiveTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventActorActiveSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventActorActiveTemplate();
};

