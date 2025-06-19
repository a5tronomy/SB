#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasAchievement.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasAchievement : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasAchievement();
};

