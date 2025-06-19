#pragma once
#include "CoreMinimal.h"
#include "ESBEngineTheaterEvent.generated.h"

UENUM()
enum ESBEngineTheaterEvent {
    ESBEngineTheaterEvent_Play,
    ESBEngineTheaterEvent_End,
    ESBEngineTheaterEvent_ShotSubtitle,
    ESBEngineTheaterEvent_ShotDialogue,
    ESBEngineTheaterEvent_ShotInputCounter,
    ESBEngineTheaterEvent_Input,
};

