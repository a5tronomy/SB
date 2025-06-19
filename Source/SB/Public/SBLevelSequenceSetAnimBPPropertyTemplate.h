#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceSetAnimBPPropertySectionData.h"
#include "SBLevelSequenceSetAnimBPPropertyTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceSetAnimBPPropertyTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceSetAnimBPPropertySectionData SectionData;
    
public:
    SB_API FSBLevelSequenceSetAnimBPPropertyTemplate();
};

