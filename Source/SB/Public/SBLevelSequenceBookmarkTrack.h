#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceBookmarkTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceBookmarkTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    USBLevelSequenceBookmarkTrack();


    // Fix for true pure virtual functions not being implemented
};

