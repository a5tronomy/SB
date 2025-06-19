#pragma once
#include "CoreMinimal.h"
#include "ESBInterpType.generated.h"

UENUM()
enum ESBInterpType {
    InterpType_Liner,
    InterpType_Step,
    InterpType_SinIn,
    InterpType_SinOut,
    InterpType_SinInOut,
    InterpType_ExpoIn,
    InterpType_ExpoOut,
    InterpType_ExpoInOut,
    InterpType_CircularIn,
    InterpType_CircularOut,
    InterpType_CircularInOut,
    InterpType_EaseIn,
    InterpType_EaseOut,
    InterpType_EaseInOut,
    InterpType_CurveData,
};

