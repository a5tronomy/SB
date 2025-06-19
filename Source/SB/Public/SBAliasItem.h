#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasItem.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasItem : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasItem();
};

