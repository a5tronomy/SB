#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventPlayerCameraShakeSectionData.h"
#include "SBLevelSequenceEventPlayerCameraShakeSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventPlayerCameraShakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShakeSectionData ShakeData;
    
    USBLevelSequenceEventPlayerCameraShakeSection();

};

