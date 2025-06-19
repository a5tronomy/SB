#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasCharacterTribe.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasCharacterTribe : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasCharacterTribe();
};

