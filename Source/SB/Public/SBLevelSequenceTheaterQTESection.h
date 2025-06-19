#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventQTESectionData.h"
#include "SBLevelSequenceTheaterQTESection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterQTESection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventQTESectionData Data;
    
    USBLevelSequenceTheaterQTESection();

};

