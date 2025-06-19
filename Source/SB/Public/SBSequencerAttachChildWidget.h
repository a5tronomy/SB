#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerAttachChildWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerAttachChildWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> Arguments;
    
public:
    USBSequencerAttachChildWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void EventSetup();
    
};

