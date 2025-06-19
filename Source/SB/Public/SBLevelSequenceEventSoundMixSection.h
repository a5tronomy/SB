#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventSoundMixSectionData.h"
#include "SBLevelSequenceEventSoundMixSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventSoundMixSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventSoundMixSectionData Data;
    
    USBLevelSequenceEventSoundMixSection();

};

