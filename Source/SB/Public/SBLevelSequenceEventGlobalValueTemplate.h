#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventGlobalValueSectionData.h"
#include "SBLevelSequenceEventGlobalValueTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventGlobalValueTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventGlobalValueSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventGlobalValueTemplate();
};

