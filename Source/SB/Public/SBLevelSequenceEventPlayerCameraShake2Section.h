#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventPlayerCameraShake2SectionData.h"
#include "SBLevelSequenceEventPlayerCameraShake2Section.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventPlayerCameraShake2Section : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2SectionData ShakeData;
    
    USBLevelSequenceEventPlayerCameraShake2Section();

};

