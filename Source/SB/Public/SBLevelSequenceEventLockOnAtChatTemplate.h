#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBLevelSequenceEventLockOnAtChatSectionData.h"
#include "SBLevelSequenceEventLockOnAtChatTemplate.generated.h"

USTRUCT()
struct FSBLevelSequenceEventLockOnAtChatTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBLevelSequenceEventLockOnAtChatSectionData SectionData;
    
public:
    SB_API FSBLevelSequenceEventLockOnAtChatTemplate();
};

