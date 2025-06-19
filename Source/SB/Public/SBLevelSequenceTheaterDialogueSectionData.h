#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceSectionProperty.h"
#include "SBLevelSequenceTheaterDialogueSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterDialogueSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Message;
    
    UPROPERTY(EditAnywhere)
    bool RequireWaitInput;
    
    UPROPERTY(EditAnywhere)
    float DelayWidgetCloseTime;
    
    UPROPERTY(VisibleAnywhere)
    FSBLevelSequenceSectionProperty Blank;
    
    SB_API FSBLevelSequenceTheaterDialogueSectionData();
};

