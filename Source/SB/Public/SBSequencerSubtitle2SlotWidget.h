#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionSubtitleSizeType.h"
#include "ESBGameOptionSubtitleVisibleType.h"
#include "SBUserWidget.h"
#include "SBSequencerSubtitle2SlotWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerSubtitle2SlotWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTimeHide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTimeFold;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESBGameOptionSubtitleVisibleType SubtitleVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESBGameOptionSubtitleSizeType SubtitleSizeType;
    
public:
    USBSequencerSubtitle2SlotWidget();

    UFUNCTION(BlueprintCallable)
    void NotifyFoldFinish();
    
};

