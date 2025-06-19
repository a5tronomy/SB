#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceSkipTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceSkipTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    USBLevelSequenceSkipTrack();


    // Fix for true pure virtual functions not being implemented
};

