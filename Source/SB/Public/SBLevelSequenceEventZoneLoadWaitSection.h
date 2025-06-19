#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventZoneLoadWaitSectionData.h"
#include "SBLevelSequenceEventZoneLoadWaitSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventZoneLoadWaitSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventZoneLoadWaitSectionData Data;
    
    USBLevelSequenceEventZoneLoadWaitSection();

};

