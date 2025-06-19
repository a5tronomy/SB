#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventActorEffectSectionData.h"
#include "SBLevelSequenceEventActorEffectSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventActorEffectSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventActorEffectSectionData Data;
    
    USBLevelSequenceEventActorEffectSection();

};

