#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventVibrationSectionData.h"
#include "SBLevelSequenceEventVibrationSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventVibrationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventVibrationSectionData Data;
    
    USBLevelSequenceEventVibrationSection();

};

