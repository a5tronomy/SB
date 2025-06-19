#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventHUDActionSectionData.h"
#include "SBLevelSequenceEventHUDActionSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventHUDActionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventHUDActionSectionData Data;
    
    USBLevelSequenceEventHUDActionSection();

};

