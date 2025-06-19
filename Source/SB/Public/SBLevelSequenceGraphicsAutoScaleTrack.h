#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceGraphicsAutoScaleTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceGraphicsAutoScaleTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    USBLevelSequenceGraphicsAutoScaleTrack();


    // Fix for true pure virtual functions not being implemented
};

