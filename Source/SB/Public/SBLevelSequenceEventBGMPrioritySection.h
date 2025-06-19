#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventBGMPrioritySectionData.h"
#include "SBLevelSequenceEventBGMPrioritySection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventBGMPrioritySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventBGMPrioritySectionData Data;
    
    USBLevelSequenceEventBGMPrioritySection();

};

