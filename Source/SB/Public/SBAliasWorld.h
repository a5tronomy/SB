#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasWorld.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasWorld : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasWorld();
};

