#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEnvControlVolumeSectionData.h"
#include "SBLevelSequenceEnvControlVolumeSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEnvControlVolumeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEnvControlVolumeSectionData Data;
    
    USBLevelSequenceEnvControlVolumeSection();

};

