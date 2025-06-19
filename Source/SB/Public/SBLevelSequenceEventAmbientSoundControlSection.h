#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventAmbientSoundControlSectionData.h"
#include "SBLevelSequenceEventAmbientSoundControlSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventAmbientSoundControlSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventAmbientSoundControlSectionData Data;
    
    USBLevelSequenceEventAmbientSoundControlSection();

};

