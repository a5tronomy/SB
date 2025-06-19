#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSectionProperty.h"
#include "SBLevelSequenceTheaterPlayerChoiceSectionData.h"
#include "SBLevelSequenceTheaterPlayerChoiceSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterPlayerChoiceSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FText> MessageArray;
    
    UPROPERTY()
    bool RequireWaitInput;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterPlayerChoiceSectionData Data;
    
    UPROPERTY(VisibleAnywhere)
    FSBLevelSequenceSectionProperty Blank;
    
    USBLevelSequenceTheaterPlayerChoiceSection();

};

