#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceEnvControlVolumeTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceEnvControlVolumeTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceEnvControlVolumeTrack();


    // Fix for true pure virtual functions not being implemented
};

