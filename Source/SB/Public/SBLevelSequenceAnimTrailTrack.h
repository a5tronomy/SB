#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceAnimTrailTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class USBLevelSequenceAnimTrailTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceAnimTrailTrack();


    // Fix for true pure virtual functions not being implemented
};

