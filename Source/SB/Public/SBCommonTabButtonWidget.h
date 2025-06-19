#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "ESBUIRedDotState.h"
#include "SBUserWidget.h"
#include "SBCommonTabButtonWidget.generated.h"

class USpacer;
class UTextBlock;

UCLASS(EditInlineNew)
class USBCommonTabButtonWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TextBlock;
    
    UPROPERTY(Instanced)
    USpacer* TextWidth;
    
    UPROPERTY(Instanced)
    USpacer* TextLeftMargin;
    
    UPROPERTY(Instanced)
    USpacer* TextRightMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextWidthValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTextMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextShadowColor;
    
public:
    USBCommonTabButtonWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetDotState(TEnumAsByte<ESBUIRedDotState> inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDotData(FName InParentAlias, FName InDotAlias);
    
    UFUNCTION(BlueprintCallable)
    void RefreshDesign();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusTabButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefocusTabButton();
    
};

