#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventActorEffectSectionData.h"
#include "SBLevelSequenceEventActorEffectTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventActorEffectTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventActorEffectSectionData SectionData;
    
    UPROPERTY()
    FGuid SectionSignature;
    
public:
    SB_API FSBLevelSequenceEventActorEffectTemplate();
};

