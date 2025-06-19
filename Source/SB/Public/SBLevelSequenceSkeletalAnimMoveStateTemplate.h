#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceSkeletalAnimMoveStateSectionTemplateParameters.h"
#include "SBLevelSequenceSkeletalAnimMoveStateTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceSkeletalAnimMoveStateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceSkeletalAnimMoveStateSectionTemplateParameters Params;
    
public:
    SB_API FSBLevelSequenceSkeletalAnimMoveStateTemplate();
};

