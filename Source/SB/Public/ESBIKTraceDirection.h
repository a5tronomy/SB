#pragma once
#include "CoreMinimal.h"
#include "ESBIKTraceDirection.generated.h"

UENUM()
enum ESBIKTraceDirection {
    ESBIKTrace_Forward,
    ESBIKTrace_Right,
    ESBIKTrace_Up,
    ESBIKTrace_InverseForward,
    ESBIKTrace_InverseRight,
    ESBIKTrace_InverseUp,
};

