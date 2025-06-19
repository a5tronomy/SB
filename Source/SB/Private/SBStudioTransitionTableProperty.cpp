#include "SBStudioTransitionTableProperty.h"

FSBStudioTransitionTableProperty::FSBStudioTransitionTableProperty() {
    this->ID = 0;
    this->StartState = ESBUIStudioState_None;
    this->TargetState = ESBUIStudioState_None;
    this->bFade = false;
}

