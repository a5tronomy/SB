#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBUserWidget.h"
#include "SBPrimitiveListViewItemWidget.generated.h"

UCLASS(EditInlineNew)
class USBPrimitiveListViewItemWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    USBPrimitiveListViewItemWidget();

private:
    UFUNCTION()
    void OnClickedObjectToggleVisible();
    

    // Fix for true pure virtual functions not being implemented
};

