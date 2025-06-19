#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceBKMovieSectionData.h"
#include "SBLevelSequenceBKMovieSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceBKMovieSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceBKMovieSectionData Data;
    
    USBLevelSequenceBKMovieSection();

};

