#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBCursorUserWidget.generated.h"

UCLASS(EditInlineNew)
class SB_API USBCursorUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBCursorUserWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnCursorUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool IsGlobalCursorVisibleAllow();
    
};

