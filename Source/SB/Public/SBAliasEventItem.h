#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventItem.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasEventItem : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventItem();
};

