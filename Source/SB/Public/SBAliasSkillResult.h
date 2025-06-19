#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasSkillResult.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasSkillResult : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasSkillResult();
};

