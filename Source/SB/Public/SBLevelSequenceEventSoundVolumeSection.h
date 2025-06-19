#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventSoundVolumeSectionData.h"
#include "SBLevelSequenceEventSoundVolumeSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventSoundVolumeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventSoundVolumeSectionData Data;
    
    USBLevelSequenceEventSoundVolumeSection();

};

