#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasQuest.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasQuest : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasQuest();
};

