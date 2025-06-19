#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSplineCineCamTrackingSectionData.h"
#include "SBLevelSequenceSplineCineCamTrackingSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceSplineCineCamTrackingSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceSplineCineCamTrackingSectionData Data;
    
    USBLevelSequenceSplineCineCamTrackingSection();

};

