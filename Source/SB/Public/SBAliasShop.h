#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasShop.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasShop : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasShop();
};

