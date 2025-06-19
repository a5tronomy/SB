#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceCameraActorBoundsSectionData.h"
#include "SBLevelSequenceCameraActorBoundsSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceCameraActorBoundsSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceCameraActorBoundsSectionData Data;
    
    USBLevelSequenceCameraActorBoundsSection();

};

