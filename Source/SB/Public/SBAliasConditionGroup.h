#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasConditionGroup : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasConditionGroup();
};

