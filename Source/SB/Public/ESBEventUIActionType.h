#pragma once
#include "CoreMinimal.h"
#include "ESBEventUIActionType.generated.h"

UENUM()
enum ESBEventUIActionType {
    ESBEventUIActionType_None,
    ESBEventUIActionType_OpenUI,
    ESBEventUIActionType_ActionEvent,
    ESBEventUIActionType_AlbumNotifyUpdate,
    ESBEventUIActionType_HUDInputLock,
    ESBEventUIActionType_GameMenuInputLock,
    ESBEventUIActionType_NikkeHUDSendUIWidgetEvent,
};

