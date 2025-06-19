#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceMoveToLocationTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceMoveToLocationTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceMoveToLocationTrack();


    // Fix for true pure virtual functions not being implemented
};

