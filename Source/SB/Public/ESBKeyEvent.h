#pragma once
#include "CoreMinimal.h"
#include "ESBKeyEvent.generated.h"

UENUM()
enum ESBKeyEvent {
    ESBKeyEvent_None,
    ESBKeyEvent_GameOption_Key,
    ESBKeyEvent_CrossKey_Up,
    ESBKeyEvent_CrossKey_Down,
    ESBKeyEvent_CrossKey_Left,
    ESBKeyEvent_CrossKey_Right,
    ESBKeyEvent_LeftKey_Click,
    ESBKeyEvent_RightKey_Up,
    ESBKeyEvent_RightKey_Down,
    ESBKeyEvent_RightKey_Left,
    ESBKeyEvent_RightKey_Right,
    ESBKeyEvent_RightKey_Click,
    ESBKeyEvent_LeftShoulderKey,
    ESBKeyEvent_RightShoulderKey,
    ESBKeyEvent_LeftTriggerKey,
    ESBKeyEvent_RightTriggerKey,
    ESBKeyEvent_FocusChangeKey,
    ESBKeyEvent_SystemFunction1,
    ESBKeyEvent_SystemFunction2,
};

