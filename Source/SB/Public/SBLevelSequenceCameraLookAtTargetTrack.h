#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBLevelSequenceCameraLookAtTargetTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class SB_API USBLevelSequenceCameraLookAtTargetTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    USBLevelSequenceCameraLookAtTargetTrack();


    // Fix for true pure virtual functions not being implemented
};

