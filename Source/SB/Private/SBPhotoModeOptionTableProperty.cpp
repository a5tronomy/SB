#include "SBPhotoModeOptionTableProperty.h"

FSBPhotoModeOptionTableProperty::FSBPhotoModeOptionTableProperty() {
    this->ID = 0;
    this->OptionType = ESBPhotoModeOptionType_None;
    this->CameraType = ESBPhotoModeCameraType_None;
    this->UISlotType = ESBPhotoModeOptionUISlotType_None;
    this->PhotoModeUITab = ESBUIPhotoModeTab_None;
    this->bLocked = false;
    this->InitialValue = 0.00f;
    this->DefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->FloatValueDecimalRoundPoint = 0;
    this->UIMinValue = 0.00f;
    this->UIMaxValue = 0.00f;
    this->UISliderSlotIntervalValue = 0.00f;
    this->UISliderSlotClickIntervalValue = 0.00f;
    this->UIErrorTolerance = 0.00f;
    this->bOverrideValueOnLocked = false;
    this->OverriddenValueOnLocked = 0.00f;
    this->bFreezeCameraOnFocus = false;
    this->bControlActiveLight = false;
    this->bSetDefaultToFinalPostProcessing = false;
    this->bEnableValueSnapToNearestUI = false;
    this->EditorOnlyStepValue = 0.00f;
}

