#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceCommonTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceCommonTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    USBLevelSequenceCommonTrack();


    // Fix for true pure virtual functions not being implemented
};

