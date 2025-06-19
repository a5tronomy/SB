#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventActorBattleStateSectionData.h"
#include "SBLevelSequenceEventActorBattleStateSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventActorBattleStateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventActorBattleStateSectionData Data;
    
    USBLevelSequenceEventActorBattleStateSection();

};

