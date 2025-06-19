#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBLoadingScreenWidget.generated.h"

class UImage;
class UProgressBar;
class URichTextBlock;
class UWidget;

UCLASS(EditInlineNew)
class USBLoadingScreenWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWidget* RootWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWidget* ThrobberWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_LoadingScreen;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Shader;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UImage* Image_Working;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextBlock_Tip;
    
public:
    USBLoadingScreenWidget();

};

