#pragma once
#include "CoreMinimal.h"
#include "EIKTrace_Type_Plugin.generated.h"

UENUM()
enum class EIKTrace_Type_Plugin : uint8 {
    ENUM_LineTrace_Type,
    ENUM_SphereTrace_Type,
    ENUM_BoxTrace_Type,
    ENUM_CapsuleTrace_Type,
};

