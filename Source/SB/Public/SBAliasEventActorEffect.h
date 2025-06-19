#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventActorEffect.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasEventActorEffect : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventActorEffect();
};

