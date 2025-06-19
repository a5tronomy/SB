#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventTheater.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasEventTheater : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventTheater();
};

