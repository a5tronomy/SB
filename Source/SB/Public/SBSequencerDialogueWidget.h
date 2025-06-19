#pragma once
#include "CoreMinimal.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerDialogueWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerDialogueWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Message;
    
    UPROPERTY(Transient)
    bool bModeWaitInput;
    
    UPROPERTY(Transient)
    float SkipFirstTick;
    
    UPROPERTY(Transient)
    bool bInputComplete;
    
public:
    USBSequencerDialogueWidget();

};

