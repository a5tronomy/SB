#pragma once
#include "CoreMinimal.h"
#include "ESBUIGuideMessageEventType.generated.h"

UENUM()
enum ESBUIGuideMessageEventType {
    ESBUIGuideMessageEvent_None,
    ESBUIGuideMessageEvent_Start,
    ESBUIGuideMessageEvent_Complete,
    ESBUIGuideMessageEvent_Skip,
};

