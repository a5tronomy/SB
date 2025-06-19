#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZoneEnv.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasZoneEnv : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZoneEnv();
};

