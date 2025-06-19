#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasMetaAI.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasMetaAI : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasMetaAI();
};

