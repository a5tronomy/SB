#include "SBPuzzleWidget.h"

USBPuzzleWidget::USBPuzzleWidget() {
}


void USBPuzzleWidget::SetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, FVector Data) {
}

void USBPuzzleWidget::SetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, const FString& Data) {
}

void USBPuzzleWidget::SetPuzzleData(const FString& PuzzleData) {
}

void USBPuzzleWidget::SetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, int32 Data) {
}

void USBPuzzleWidget::SetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, float Data) {
}

void USBPuzzleWidget::SetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, bool Data) {
}





void USBPuzzleWidget::InputAxis(float Value, TEnumAsByte<ESBInputAxisType> InputAxisType) {
}

FVector USBPuzzleWidget::GetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_) {
    return FVector{};
}

FString USBPuzzleWidget::GetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_) {
    return TEXT("");
}

FString USBPuzzleWidget::GetPuzzleData() {
    return TEXT("");
}

int32 USBPuzzleWidget::GetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_) {
    return 0;
}

float USBPuzzleWidget::GetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_) {
    return 0.0f;
}

bool USBPuzzleWidget::GetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_) {
    return false;
}

void USBPuzzleWidget::CompletePuzzle() {
}


