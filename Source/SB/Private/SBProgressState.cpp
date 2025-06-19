#include "SBProgressState.h"

ASBProgressState::ASBProgressState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Progress = 0.00f;
    this->StartProgress = 0.00f;
    this->EditorViewProgress = 0.00f;
}


void ASBProgressState::ChangeProgress(float InValue) {
}


