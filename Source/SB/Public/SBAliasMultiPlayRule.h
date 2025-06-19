#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasMultiPlayRule.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasMultiPlayRule : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasMultiPlayRule();
};

