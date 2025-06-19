#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBGameOptionSubtitleAuthorType.h"
#include "ESBGameOptionSubtitleSizeType.h"
#include "ESBGameOptionSubtitleVisibleType.h"
#include "ESBSequenceContentType.h"
#include "ESBSequencerSubtitleType.h"
#include "SBUserWidget.h"
#include "SBSequencerSubtitle3SlotWidget.generated.h"

class USBTypeWriterWidget;

UCLASS(EditInlineNew)
class USBSequencerSubtitle3SlotWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBSequencerSubtitleType> Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText author;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Message;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESBGameOptionSubtitleVisibleType SubtitleVisibleType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESBGameOptionSubtitleSizeType SubtitleSizeType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ESBGameOptionSubtitleAuthorType SubtitleAuthorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USBTypeWriterWidget> WB_Typewriter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> CultureLetterTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> CultureLetterSpaceTimeMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBSequenceContentType> ContentType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLinearColor AuthorColor;
    
    UPROPERTY(Transient)
    float DefaultLetterPlayTime;
    
    UPROPERTY(Transient)
    bool bFinishTypewriter;
    
public:
    USBSequencerSubtitle3SlotWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void NotifyTypewriterFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventSlotShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventSlotHide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventRequestTypewriterSkip();
    
};

