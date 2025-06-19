#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasGuideAction.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasGuideAction : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasGuideAction();
};

