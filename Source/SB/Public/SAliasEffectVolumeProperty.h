#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SAliasEffectVolumeProperty.generated.h"

USTRUCT(BlueprintType)
struct FSAliasEffectVolumeProperty : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSAliasEffectVolumeProperty();
};

