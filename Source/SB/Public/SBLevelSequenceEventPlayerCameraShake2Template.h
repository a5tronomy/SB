#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventPlayerCameraShake2SectionData.h"
#include "SBLevelSequenceEventPlayerCameraShake2Template.generated.h"

USTRUCT()
struct FSBLevelSequenceEventPlayerCameraShake2Template : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventPlayerCameraShake2SectionData ShakeData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBLevelSequenceEventPlayerCameraShake2Template();
};

