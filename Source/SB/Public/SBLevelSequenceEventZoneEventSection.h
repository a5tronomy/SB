#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventZoneEventSectionData.h"
#include "SBLevelSequenceEventZoneEventSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventZoneEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventZoneEventSectionData Data;
    
    USBLevelSequenceEventZoneEventSection();

};

