#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceSetAnimBPPropertyTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceSetAnimBPPropertyTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
public:
    USBLevelSequenceSetAnimBPPropertyTrack();


    // Fix for true pure virtual functions not being implemented
};

