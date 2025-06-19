#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeInputDirection.generated.h"

UENUM()
enum ESBPhotoModeInputDirection {
    ESBPhotoModeInputDirection_None,
    ESBPhotoModeInputDirection_FB,
    ESBPhotoModeInputDirection_LR,
    ESBPhotoModeInputDirection_Up,
    ESBPhotoModeInputDirection_Down,
    ESBPhotoModeInputDirection_Turn,
    ESBPhotoModeInputDirection_Look,
    ESBPhotoModeInputDirection_MouseX,
    ESBPhotoModeInputDirection_MouseY,
    ESBPhotoModeInputDirection_Light_F,
    ESBPhotoModeInputDirection_Light_B,
    ESBPhotoModeInputDirection_Light_LR,
    ESBPhotoModeInputDirection_Light_Up,
    ESBPhotoModeInputDirection_Light_Down,
    ESBPhotoModeInputDirection_Selfie_Arm_UD,
    ESBPhotoModeInputDirection_Selfie_Char_LR,
    ESBPhotoModeInputDirection_Selfie_CharHead_LR,
    ESBPhotoModeInputDirection_Selfie_Cam_LR,
    ESBPhotoModeInputDirection_Selfie_CharHead_UD,
    ESBPhotoModeInputDirection_Selfie_Cam_UD,
};

