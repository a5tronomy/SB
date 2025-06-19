#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "SBCommonSideTabBtnData.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBCommonSideTabWidget.generated.h"

class USBCommonSideTabButtonWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class USBCommonSideTabWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* TabButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabBtnWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabBtnMinPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabBtnSpace;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USBCommonSideTabButtonWidget> TabButtonClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBCommonSideTabBtnData> TabDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FocusTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextShadowColor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBCommonSideTabButtonWidget*> TabButtonInstanceArray;
    
public:
    USBCommonSideTabWidget();

    UFUNCTION(BlueprintCallable)
    void BindEventTarget(USBUserWidget* InWidget);
    
};

