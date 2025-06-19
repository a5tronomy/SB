#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterAreaSectionData.h"
#include "SBLevelSequenceTheaterAreaSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterAreaSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterAreaSectionData Data;
    
    USBLevelSequenceTheaterAreaSection();

};

