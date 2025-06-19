#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventPlayerCameraShakeSectionData.h"
#include "SBLevelSequenceEventPlayerCameraShakeTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventPlayerCameraShakeTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventPlayerCameraShakeSectionData ShakeData;
    
public:
    SB_API FSBLevelSequenceEventPlayerCameraShakeTemplate();
};

