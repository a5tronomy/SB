#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceTheaterAttachWidgetSectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerAttachWidget.generated.h"

class USBSequencerAttachChildWidget;

UCLASS(EditInlineNew)
class USBSequencerAttachWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBLevelSequenceTheaterAttachWidgetSectionData SectionData;
    
    UPROPERTY(Transient)
    FString LastAssetPath;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerAttachChildWidget* ChildWidget;
    
public:
    USBSequencerAttachWidget();

    UFUNCTION(BlueprintCallable)
    void ClearWidget();
    
};

