#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterSubtitleSectionData.h"
#include "SBLevelSequenceTheaterSubtitleSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterSubtitleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterSubtitleSectionData Data;
    
    USBLevelSequenceTheaterSubtitleSection();

};

