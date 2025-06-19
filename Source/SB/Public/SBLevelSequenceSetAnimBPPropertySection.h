#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSetAnimBPPropertySectionData.h"
#include "SBLevelSequenceSetAnimBPPropertySection.generated.h"

UCLASS()
class SB_API USBLevelSequenceSetAnimBPPropertySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceSetAnimBPPropertySectionData Data;
    
    USBLevelSequenceSetAnimBPPropertySection();

};

