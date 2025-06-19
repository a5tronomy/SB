#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterInteractionSelectSectionData.h"
#include "SBLevelSequenceTheaterInteractionSelectSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterInteractionSelectSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterInteractionSelectSectionData Data;
    
    USBLevelSequenceTheaterInteractionSelectSection();

};

