#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "SBVibrationSectionData.h"
#include "SBVibrationSection.generated.h"

UCLASS()
class SB_API USBVibrationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBVibrationSectionData Data;
    
private:
    UPROPERTY()
    FMovieSceneFloatChannel HapticVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel ForceFeedbackIntensity;
    
    UPROPERTY()
    FMovieSceneActorReferenceData AttachActorData;
    
public:
    USBVibrationSection();

};

