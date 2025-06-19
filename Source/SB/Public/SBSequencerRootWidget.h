#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerRootWidget.generated.h"

class USBSequencerAreaWidget;
class USBSequencerAttachWidget;
class USBSequencerBackgroundWidget;
class USBSequencerDialogueWidget;
class USBSequencerInputCounterWidget;
class USBSequencerInteractionSelectWidget;
class USBSequencerMovieWidget;
class USBSequencerPlayerChoiceWidget;
class USBSequencerQTEWidget;
class USBSequencerReactionTriggerWidget;
class USBSequencerSkipWidget;
class USBSequencerSubtitle3Widget;

UCLASS(EditInlineNew)
class USBSequencerRootWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    USBSequencerBackgroundWidget* WidgetBackground;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerAreaWidget* WidgetArea;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerDialogueWidget* WidgetDialogue;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerPlayerChoiceWidget* WidgetPlayerChoice;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerInputCounterWidget* WidgetInputCounter;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerQTEWidget* WidgetQTE;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerInteractionSelectWidget* WidgetInteractionSelect;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerSubtitle3Widget* WidgetSubtitle;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerMovieWidget* WidgetMovie;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerSkipWidget* WidgetSkip;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerReactionTriggerWidget* WidgetReactionTrigger;
    
    UPROPERTY(Instanced, Transient)
    USBSequencerAttachWidget* WidgetAttach;
    
    UPROPERTY(Instanced, Transient)
    TArray<USBUserWidget*> WidgetArray;
    
public:
    USBSequencerRootWidget();

};

