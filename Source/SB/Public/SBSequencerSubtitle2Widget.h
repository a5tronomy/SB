#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "ESBGameOptionSubtitleBGType.h"
#include "ESBGameOptionSubtitleSizeType.h"
#include "ESBGameOptionSubtitleVisibleType.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerSubtitle2Widget.generated.h"

class ULevelSequencePlayer;

UCLASS(EditInlineNew)
class USBSequencerSubtitle2Widget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleVisibleType SubtitleVisibleType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleSizeType SubtitleSizeType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleBGType SubtitleBGType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSlotCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLineCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo FontInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MessageWrapWidth;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ULevelSequencePlayer> SequencePlayer;
    
    UPROPERTY(Transient)
    int32 bindCount;
    
public:
    USBSequencerSubtitle2Widget();

    UFUNCTION(BlueprintCallable)
    void RefreshOptionSubtitleVisible();
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptionSubtitleSize();
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptionSubtitleBG();
    
};

