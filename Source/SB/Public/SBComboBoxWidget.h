#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Sound/SlateSound.h"
#include "Components/ComboBoxString.h"
#include "SBComboBoxItemSet.h"
#include "Templates/SubclassOf.h"
#include "SBComboBoxWidget.generated.h"

class UObject;
class USBComboBoxItemWidget;
class UWidget;

UCLASS()
class USBComboBoxWidget : public UComboBoxString {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBOnSelectionChangedEvent, UObject*, SelectedItem, TEnumAsByte<ESelectInfo::Type>, SelectionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBOnHoverItemEvent, UObject*, HoverItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBOnGeneratedItemWidget, USBComboBoxItemWidget*, ItemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBOnFocusChangedEvent, UObject*, PrevItem, UObject*, NewItem);
    
    UPROPERTY(BlueprintAssignable)
    FSBOnGeneratedItemWidget OnGeneratedItemWidget;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnSelectionChangedEvent OnSelectionChangedComboBox;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnFocusChangedEvent OnFocusChangedComboBox;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnHoverItemEvent OnEnterHoverComboBoxItem;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnHoverItemEvent OnExitHoverComboBoxItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableHeaderItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound FocusChangedSound;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USBComboBoxItemWidget> ItemWidgetClass;
    
private:
    UPROPERTY(Transient)
    TArray<FSBComboBoxItemSet> ItemSetArray;
    
public:
    USBComboBoxWidget();

    UFUNCTION(BlueprintCallable)
    void SetManualOpen(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    bool SelectItemByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UObject* Item);
    
private:
    UFUNCTION()
    void HandleSelectionChangedInternal(const FString& ItemKey, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION()
    void HandleFocusSelectionChangedInternal(const FString& ItemKey, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
public:
    UFUNCTION(BlueprintPure)
    UObject* GetItemAt(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    USBComboBoxItemWidget* GetEntryWidgetFromItem(UObject* Item) const;
    
private:
    UFUNCTION()
    UWidget* GenerateItemWidget(const FString& ItemKey);
    
public:
    UFUNCTION(BlueprintPure)
    int32 FindOptionIndexByItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearItems();
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* Item);
    
};

