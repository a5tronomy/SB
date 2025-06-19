#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterReactionTriggerSectionData.h"
#include "SBLevelSequenceTheaterReactionTriggerSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterReactionTriggerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterReactionTriggerSectionData Data;
    
    USBLevelSequenceTheaterReactionTriggerSection();

};

