#pragma once
#include "CoreMinimal.h"
#include "ESBTheaterTakeStateType.generated.h"

UENUM()
enum ESBTheaterTakeStateType {
    ESBTheaterTakeStateType_Init,
    ESBTheaterTakeStateType_Playing,
    ESBTheaterTakeStateType_Finish,
    ESBTheaterTakeStateType_Stop,
};

