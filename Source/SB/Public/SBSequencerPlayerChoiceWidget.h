#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceTheaterPlayerChoiceSectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerPlayerChoiceWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerPlayerChoiceWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SelectMsgIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBLevelSequenceTheaterPlayerChoiceSectionData SectionData;
    
    UPROPERTY(Transient)
    bool bModeWaitInput;
    
    UPROPERTY(Transient)
    bool bSkipTaked;
    
    UPROPERTY(Transient)
    bool bInputComplete;
    
public:
    USBSequencerPlayerChoiceWidget();

};

