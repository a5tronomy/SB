#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventZoneEventSectionData.h"
#include "SBLevelSequenceEventZoneEventTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventZoneEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventZoneEventSectionData SectionData;
    
    UPROPERTY()
    FGuid SectionSignature;
    
public:
    SB_API FSBLevelSequenceEventZoneEventTemplate();
};

