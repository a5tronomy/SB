#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceLookAtTargetSectionData.h"
#include "SBLevelSequenceLookAtTargetSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceLookAtTargetSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceLookAtTargetSectionData Data;
    
    USBLevelSequenceLookAtTargetSection();

};

