#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventActorAISectionData.h"
#include "SBLevelSequenceEventActorAISection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventActorAISection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventActorAISectionData Data;
    
    USBLevelSequenceEventActorAISection();

};

