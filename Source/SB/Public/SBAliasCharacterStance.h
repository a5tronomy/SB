#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasCharacterStance.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasCharacterStance : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasCharacterStance();
};

