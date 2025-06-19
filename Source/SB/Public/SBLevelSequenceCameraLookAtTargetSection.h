#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceCameraLookAtTargetSectionData.h"
#include "SBLevelSequenceCameraLookAtTargetSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceCameraLookAtTargetSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceCameraLookAtTargetSectionData Data;
    
    USBLevelSequenceCameraLookAtTargetSection();

};

