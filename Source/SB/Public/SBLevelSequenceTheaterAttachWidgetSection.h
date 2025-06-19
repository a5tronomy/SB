#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterAttachWidgetSectionData.h"
#include "SBLevelSequenceTheaterAttachWidgetSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterAttachWidgetSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterAttachWidgetSectionData Data;
    
    USBLevelSequenceTheaterAttachWidgetSection();

};

