#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEffectVolume.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasEffectVolume : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEffectVolume();
};

