#pragma once
#include "CoreMinimal.h"
#include "ACLRotationFormat.generated.h"

UENUM()
enum ACLRotationFormat {
    ACLRF_Quat_128,
    ACLRF_QuatDropW_96,
    ACLRF_QuatDropW_Variable,
};

