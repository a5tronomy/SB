#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceCharacterActionSectionData.h"
#include "SBLevelSequenceCharacterActionSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceCharacterActionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceCharacterActionSectionData Data;
    
    USBLevelSequenceCharacterActionSection();

};

