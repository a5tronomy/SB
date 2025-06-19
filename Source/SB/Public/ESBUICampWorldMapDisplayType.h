#pragma once
#include "CoreMinimal.h"
#include "ESBUICampWorldMapDisplayType.generated.h"

UENUM()
enum ESBUICampWorldMapDisplayType {
    ESBUICampWorldMapDisplayType_None,
    ESBUICampWorldMapDisplayType_WhenActive,
    ESBUICampWorldMapDisplayType_WhenLinkActive,
    ESBUICampWorldMapDisplayType_WhenLinkDeactive,
    ESBUICampWorldMapDisplayType_Always,
    ESBUICampWorldMapDisplayType_Never,
};

