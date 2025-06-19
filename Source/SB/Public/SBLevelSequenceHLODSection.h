#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceHLODSection.generated.h"

UCLASS(MinimalAPI)
class USBLevelSequenceHLODSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneBoolChannel BoolCurve;
    
    USBLevelSequenceHLODSection();

};

