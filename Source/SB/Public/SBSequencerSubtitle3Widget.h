#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "ESBGameOptionSubtitleAuthorType.h"
#include "ESBGameOptionSubtitleBGType.h"
#include "ESBGameOptionSubtitleSizeType.h"
#include "ESBGameOptionSubtitleVisibleType.h"
#include "ESBSequenceContentType.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerSubtitle3Widget.generated.h"

class ULevelSequencePlayer;

UCLASS(EditInlineNew)
class USBSequencerSubtitle3Widget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleVisibleType SubtitleVisibleType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleSizeType SubtitleSizeType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleBGType SubtitleBGType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESBGameOptionSubtitleAuthorType SubtitleAuthorType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSlotCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLineCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo FontInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MessageWrapWidth;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TypewirterSkipTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBSequenceContentType> ContentType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLinearColor AuthorColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FLinearColor> AuthorColorMap;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ULevelSequencePlayer> SequencePlayer;
    
public:
    USBSequencerSubtitle3Widget();

    UFUNCTION(BlueprintCallable)
    bool RefreshOptionSubtitleVisible();
    
    UFUNCTION(BlueprintCallable)
    bool RefreshOptionSubtitleSize();
    
    UFUNCTION(BlueprintCallable)
    bool RefreshOptionSubtitleBG();
    
    UFUNCTION(BlueprintCallable)
    bool RefreshOptionSubtitleAuthor();
    
    UFUNCTION(BlueprintCallable)
    void ClickJumpSubtitle();
    
};

