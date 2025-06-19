#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventBGMSectionData.h"
#include "SBLevelSequenceEventBGMSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventBGMSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventBGMSectionData Data;
    
    USBLevelSequenceEventBGMSection();

};

