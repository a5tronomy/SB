#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceTheaterDialogueSectionData.h"
#include "SBLevelSequenceTheaterDialogueSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceTheaterDialogueSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText Message;
    
    UPROPERTY()
    bool RequireWaitInput;
    
    UPROPERTY()
    float DelayWidgetCloseTime;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterDialogueSectionData Data;
    
    USBLevelSequenceTheaterDialogueSection();

};

