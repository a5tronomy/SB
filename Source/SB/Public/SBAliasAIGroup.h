#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasAIGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasAIGroup : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasAIGroup();
};

