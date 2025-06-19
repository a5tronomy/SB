#include "SBCommonTabWidget.h"

USBCommonTabWidget::USBCommonTabWidget() {
    this->CurrentTab = ESBUILogicType_NONE;
    this->LeftIcon = NULL;
    this->LeftIcon_LeftSpace = NULL;
    this->LeftIcon_RightSpace = NULL;
    this->RightIcon = NULL;
    this->RightIcon_LeftSpace = NULL;
    this->RightIcon_RightSpace = NULL;
    this->TabButtonContainer = NULL;
    this->TabBtnWidth = 250.00f;
    this->TabBtnMinPadding = 15.00f;
    this->LeftIconResourceAction = TEXT("UI_LeftShoulder");
    this->RightIconResourceAction = TEXT("UI_RightShoulder");
    this->LeftIconLeftSpaceValue = 60.00f;
    this->LeftIconRightSpaceValue = 30.00f;
    this->RightIconLeftSpaceValue = 30.00f;
    this->RightIconRightSpaceValue = 60.00f;
    this->TabButtonClass = NULL;
    this->TabChangedSound = NULL;
}

void USBCommonTabWidget::UpdateTabButton(TEnumAsByte<ESBUILogicType> InTargetType, TEnumAsByte<ESBUIRedDotState> InRedDotState) {
}

void USBCommonTabWidget::SetVisibilityTabButton(TEnumAsByte<ESBUILogicType> InTargetType, ESlateVisibility InVisibility) {
}

void USBCommonTabWidget::SetVisibilityMoveButton(ESlateVisibility InVisibility) {
}

void USBCommonTabWidget::FocusTabButton(TEnumAsByte<ESBUILogicType> InTargetType) {
}

void USBCommonTabWidget::DefocusTabButton() {
}


