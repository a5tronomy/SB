#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SBCommonTabButtonWidget.h"
#include "SBCommonSideTabButtonWidget.generated.h"

class USBUserWidget;
class UWidget;

UCLASS(EditInlineNew)
class USBCommonSideTabButtonWidget : public USBCommonTabButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FocusEvent;
    
public:
    USBCommonSideTabButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetNavigationFunction(FName InFunctionName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyFocusEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigationEvent(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void BindEventTarget(USBUserWidget* InWidget);
    
};

