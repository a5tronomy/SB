#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBDevJiraAuthorizeWidget.generated.h"

UCLASS(EditInlineNew)
class USBDevJiraAuthorizeWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bResponseWait;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthorized;
    
public:
    USBDevJiraAuthorizeWidget();

protected:
    UFUNCTION()
    void OnInputActionOK();
    
    UFUNCTION()
    void OnInputActionClose();
    
};

