#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventActorBattleStateSectionData.h"
#include "SBLevelSequenceEventActorBattleStateTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventActorBattleStateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventActorBattleStateSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventActorBattleStateTemplate();
};

