#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasRewardGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasRewardGroup : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasRewardGroup();
};

