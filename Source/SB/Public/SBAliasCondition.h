#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasCondition : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasCondition();
};

