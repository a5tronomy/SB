#pragma once
#include "CoreMinimal.h"
#include "ESBUISettingButtonType.generated.h"

UENUM()
enum class ESBUISettingButtonType {
    None,
    OpenPopup,
    Game_Quit,
    Game_ApplicationQuit,
    GamePlay_Restart,
    GamePlay_NightOperationGiveUp,
    PhotoMode_EnterPhotoMode,
    System_PersonalInfo,
    CreateUI,
    CreateKeyMappingViewerPad,
    CreateKeyMappingViewerKeyboardMouse,
    Accessibility_MotionSicknessPreset,
    Accessibility_MotorPreset,
    Accessibility_VisualPreset,
    Accessibility_SoundPreset,
};

