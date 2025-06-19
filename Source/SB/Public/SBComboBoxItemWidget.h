#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBComboBoxItemWidget.generated.h"

class USBUIComboBoxBaseDataObject;

UCLASS(Abstract, EditInlineNew)
class USBComboBoxItemWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    USBComboBoxItemWidget();

    UFUNCTION(BlueprintCallable)
    void SelectItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemFocusSelectionInactive(USBUIComboBoxBaseDataObject* ItemData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemFocusSelectionActive(USBUIComboBoxBaseDataObject* ItemData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemDataChanged(USBUIComboBoxBaseDataObject* ItemData);
    
};

