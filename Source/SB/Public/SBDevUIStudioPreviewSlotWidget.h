#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBUserWidget.h"
#include "SBDevUIStudioPreviewSlotWidget.generated.h"

UCLASS(EditInlineNew)
class USBDevUIStudioPreviewSlotWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Category;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Message;
    
    USBDevUIStudioPreviewSlotWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void EventRefresh();
    

    // Fix for true pure virtual functions not being implemented
};

