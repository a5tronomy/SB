#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventGlobalValueSectionData.h"
#include "SBLevelSequenceEventGlobalValueSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventGlobalValueSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventGlobalValueSectionData Data;
    
    USBLevelSequenceEventGlobalValueSection();

};

