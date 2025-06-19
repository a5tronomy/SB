#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceSplineCineCamTrackingTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class USBLevelSequenceSplineCineCamTrackingTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceSplineCineCamTrackingTrack();


    // Fix for true pure virtual functions not being implemented
};

