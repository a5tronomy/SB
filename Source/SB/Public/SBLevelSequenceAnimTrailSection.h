#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceAnimTrailSectionData.h"
#include "SBLevelSequenceAnimTrailSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceAnimTrailSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceAnimTrailSectionData Data;
    
    USBLevelSequenceAnimTrailSection();

};

