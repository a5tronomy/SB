#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SBMovieSceneSkeletalAnimRootMotionTrackParams.h"
#include "SBLevelSequenceSkeletalAnimationTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class USBLevelSequenceSkeletalAnimationTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
public:
    UPROPERTY()
    FSBMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
    
    USBLevelSequenceSkeletalAnimationTrack();


    // Fix for true pure virtual functions not being implemented
};

