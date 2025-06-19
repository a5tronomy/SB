#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZone.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasZone : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZone();
};

