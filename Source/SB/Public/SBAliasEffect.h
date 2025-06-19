#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEffect.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasEffect : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEffect();
};

