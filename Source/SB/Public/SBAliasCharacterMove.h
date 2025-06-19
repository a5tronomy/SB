#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasCharacterMove.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasCharacterMove : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasCharacterMove();
};

