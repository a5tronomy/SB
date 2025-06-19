#pragma once
#include "CoreMinimal.h"
#include "ESBSoundLogViewerType.generated.h"

UENUM()
enum ESBSoundLogViewerType {
    ESBSoundLogViewerType_None,
    ESBSoundLogViewerType_EventLog,
    ESBSoundLogViewerType_FixedLog,
    ESBSoundLogViewerType_StatLog = 4,
    ESBSoundLogViewerType_WorldLog = 8,
    ESBSoundLogViewerType_All = 15,
};

