#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/SlateWrapperTypes.h"
#include "ESBUIRedDotState.h"
#include "SBCommonManualTabBtnData.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBCommonManualTabWidget.generated.h"

class UHorizontalBox;
class UImage;
class USBCommonTabButtonWidget;
class USoundBase;
class USpacer;

UCLASS(EditInlineNew)
class USBCommonManualTabWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FName CurrentTabAlias;
    
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftIcon;
    
    UPROPERTY(Instanced)
    USpacer* LeftIcon_LeftSpace;
    
    UPROPERTY(Instanced)
    USpacer* LeftIcon_RightSpace;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightIcon;
    
    UPROPERTY(Instanced)
    USpacer* RightIcon_LeftSpace;
    
    UPROPERTY(Instanced)
    USpacer* RightIcon_RightSpace;
    
    UPROPERTY(Instanced)
    UHorizontalBox* TabButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabBtnWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabBtnMinPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LeftIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftIconResourceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RightIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightIconResourceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftIconLeftSpaceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftIconRightSpaceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightIconLeftSpaceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightIconRightSpaceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBCommonTabButtonWidget> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBCommonManualTabBtnData> TabDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FocusTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TabChangedSound;
    
public:
    USBCommonManualTabWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTabButton(FName InButtonAlias, TEnumAsByte<ESBUIRedDotState> InRedDotState);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityTabButton(FName InButtonAlias, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityMoveButton(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void FocusTabButton(FName InButtonAlias);
    
    UFUNCTION(BlueprintCallable)
    void DefocusTabButton();
    
};

