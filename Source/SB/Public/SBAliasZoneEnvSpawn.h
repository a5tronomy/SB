#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZoneEnvSpawn.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasZoneEnvSpawn : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZoneEnvSpawn();
};

