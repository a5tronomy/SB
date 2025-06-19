#include "SBComboBoxWidget.h"

USBComboBoxWidget::USBComboBoxWidget() {
    this->DisableHeaderItemWidget = false;
    this->ItemWidgetClass = NULL;
}

void USBComboBoxWidget::SetManualOpen(bool bOpen) {
}

bool USBComboBoxWidget::SelectItemByIndex(int32 Index) {
    return false;
}

bool USBComboBoxWidget::RemoveItemByIndex(int32 Index) {
    return false;
}

void USBComboBoxWidget::RemoveItem(UObject* Item) {
}

void USBComboBoxWidget::HandleSelectionChangedInternal(const FString& ItemKey, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void USBComboBoxWidget::HandleFocusSelectionChangedInternal(const FString& ItemKey, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

UObject* USBComboBoxWidget::GetItemAt(int32 Index) const {
    return NULL;
}

USBComboBoxItemWidget* USBComboBoxWidget::GetEntryWidgetFromItem(UObject* Item) const {
    return NULL;
}

UWidget* USBComboBoxWidget::GenerateItemWidget(const FString& ItemKey) {
    return NULL;
}

int32 USBComboBoxWidget::FindOptionIndexByItem(UObject* Item) const {
    return 0;
}

void USBComboBoxWidget::ClearItems() {
}

void USBComboBoxWidget::AddItem(UObject* Item) {
}


