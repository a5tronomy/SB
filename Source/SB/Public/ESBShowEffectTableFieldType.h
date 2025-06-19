#pragma once
#include "CoreMinimal.h"
#include "ESBShowEffectTableFieldType.generated.h"

UENUM()
enum ESBShowEffectTableFieldType {
    ESBShowEffectTableFieldType_StartSelfEffect,
    ESBShowEffectTableFieldType_StartTargetEffect,
    ESBShowEffectTableFieldType_SelfPositionEffect,
    ESBShowEffectTableFieldType_TargetPositionEffect,
};

