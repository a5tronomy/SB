#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasItemSpawn.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasItemSpawn : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasItemSpawn();
};

