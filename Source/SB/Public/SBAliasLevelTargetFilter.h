#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasLevelTargetFilter.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasLevelTargetFilter : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasLevelTargetFilter();
};

