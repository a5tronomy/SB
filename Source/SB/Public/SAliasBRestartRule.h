#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SAliasBRestartRule.generated.h"

USTRUCT(BlueprintType)
struct FSAliasBRestartRule : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSAliasBRestartRule();
};

