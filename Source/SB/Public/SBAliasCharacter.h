#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasCharacter : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasCharacter();
};

