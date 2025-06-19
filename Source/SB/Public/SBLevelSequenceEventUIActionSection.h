#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventUIActionSectionData.h"
#include "SBLevelSequenceEventUIActionSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventUIActionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventUIActionSectionData Data;
    
    USBLevelSequenceEventUIActionSection();

};

