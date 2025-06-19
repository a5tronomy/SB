#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceSkeletalAnimationSectionTemplateParameters.h"
#include "SBLevelSequenceSkeletalAnimationSectionTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceSkeletalAnimationSectionTemplateParameters Params;
    
public:
    SB_API FSBLevelSequenceSkeletalAnimationSectionTemplate();
};

