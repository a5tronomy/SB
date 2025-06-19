#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventSoundEventSectionData.h"
#include "SBLevelSequenceEventSoundEventSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventSoundEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventSoundEventSectionData Data;
    
    USBLevelSequenceEventSoundEventSection();

};

