#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerPlayerChoiceSlotWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerPlayerChoiceSlotWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    USBSequencerPlayerChoiceSlotWidget();

    UFUNCTION(BlueprintCallable)
    void NotifyClick();
    
};

