#pragma once
#include "CoreMinimal.h"
#include "ESBEnvironmentType.generated.h"

UENUM()
enum ESBEnvironmentType {
    ESBENV_Switch,
    ESBENV_Camp,
    ESBENV_Progress,
    ESBENV_Trigger,
    ESBENV_Can,
    ESBENV_NikkeDefenseArea,
    ESBENV_NikkeLostGoods_Normal,
    ESBENV_NikkeLostGoods_Request,
};

