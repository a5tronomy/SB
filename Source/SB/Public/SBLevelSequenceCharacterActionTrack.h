#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceCharacterActionTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceCharacterActionTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceCharacterActionTrack();


    // Fix for true pure virtual functions not being implemented
};

