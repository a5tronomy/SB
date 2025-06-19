#pragma once
#include "CoreMinimal.h"
#include "SBLevelAlias.h"
#include "SBLevelAliasLevelSequence.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelAliasLevelSequence : public FSBLevelAlias {
    GENERATED_BODY()
public:
    SB_API FSBLevelAliasLevelSequence();
};

