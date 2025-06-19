#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasSpawnPoint : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasSpawnPoint();
};

