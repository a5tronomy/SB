#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasSoundEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasSoundEvent : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasSoundEvent();
};

