#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceTheaterTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceTheaterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    USBLevelSequenceTheaterTrack();


    // Fix for true pure virtual functions not being implemented
};

