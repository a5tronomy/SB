#include "SBPlayerController.h"

ASBPlayerController::ASBPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->InputHandler = NULL;
    this->ShowFirstUI = false;
    this->DebugSystemInfoWidget = NULL;
    this->bViewportLostFocused = false;
    this->bBlcokControllerInputWhenPlayCameraAnim = false;
    this->bUseAutoSave = false;
    this->AutoSaveIntervalSec = 60.00f;
    this->AutoSaveRealSaveStartSec = 5.00f;
    this->AutoSaveRealSaveDurationSec = 10.00f;
    this->AutoSaveSlotName = TEXT("EVEAutoSave");
    this->ManualSaveSlotName = TEXT("EVESave");
    this->SystemSaveSlotName = TEXT("EVESystemSave");
    this->AutoSaveSlotMaxNum = 10;
    this->LanguageSlotIndex = -1;
    this->bUseAudioListenerBoneLoc = true;
    this->AudioListenerBoneName = TEXT("Bip001-Neck");
    this->DebugInfoTouchTimes.AddDefaulted(3);
    this->DebugInfoTouchCurIndex = 0;
}


