#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventActorActiveSectionData.h"
#include "SBLevelSequenceEventActorActiveSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventActorActiveSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventActorActiveSectionData Data;
    
    USBLevelSequenceEventActorActiveSection();

};

