#pragma once
#include "CoreMinimal.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerAreaWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerAreaWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText MainText;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText SubText;
    
public:
    USBSequencerAreaWidget();

};

