#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventInputCounterSectionData.h"
#include "SBLevelSequenceTheaterInputCounterSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterInputCounterSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventInputCounterSectionData Data;
    
    USBLevelSequenceTheaterInputCounterSection();

};

