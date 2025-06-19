#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventInputFeedbackSectionData.h"
#include "SBLevelSequenceTheaterInputFeedbackSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterInputFeedbackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventInputFeedbackSectionData Data;
    
    USBLevelSequenceTheaterInputFeedbackSection();

};

