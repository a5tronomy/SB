#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceMoveToLocationSectionData.h"
#include "SBLevelSequenceMoveToLocationSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceMoveToLocationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceMoveToLocationSectionData Data;
    
    USBLevelSequenceMoveToLocationSection();

};

