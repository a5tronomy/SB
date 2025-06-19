#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSkipSectionData.h"
#include "SBLevelSequenceSkipSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceSkipSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceSkipSectionData Data;
    
    USBLevelSequenceSkipSection();

};

