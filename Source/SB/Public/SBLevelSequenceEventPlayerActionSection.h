#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventPlayerActionSectionData.h"
#include "SBLevelSequenceEventPlayerActionSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventPlayerActionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerActionSectionData Data;
    
    USBLevelSequenceEventPlayerActionSection();

};

