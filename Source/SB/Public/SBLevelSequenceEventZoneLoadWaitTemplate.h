#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventZoneLoadWaitSectionData.h"
#include "SBLevelSequenceEventZoneLoadWaitTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventZoneLoadWaitTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventZoneLoadWaitSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventZoneLoadWaitTemplate();
};

