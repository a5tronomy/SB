#pragma once
#include "CoreMinimal.h"
#include "ESBUMGWidgetAction.generated.h"

UENUM()
enum ESBUMGWidgetAction {
    ESBUMGWidgetAction_None,
    ESBUMGWidgetAction_Get,
    ESBUMGWidgetAction_Set,
    ESBUMGWidgetAction_Bind,
    ESBUMGWidgetAction_Unbind,
    ESBUMGWidgetAction_Call,
};

