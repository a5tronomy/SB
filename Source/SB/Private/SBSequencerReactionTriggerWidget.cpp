#include "SBSequencerReactionTriggerWidget.h"

USBSequencerReactionTriggerWidget::USBSequencerReactionTriggerWidget() {
    this->InputType = SBLevelSequenceTheaterReactionTriggerType_None;
    this->bBindInput = false;
    this->PressTime = 0.00f;
    this->bInputPress = false;
    this->bInputComplete = false;
}

UTexture2D* USBSequencerReactionTriggerWidget::GetTextureInputType(USBTextureStyleSetData* InStyle, TEnumAsByte<ESBLevelSequenceTheaterReactionTriggerType> InInputType) {
    return NULL;
}

float USBSequencerReactionTriggerWidget::GetProgressPercent() {
    return 0.0f;
}



void USBSequencerReactionTriggerWidget::ClearWidget() {
}


