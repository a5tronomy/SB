#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventActorActive.generated.h"

USTRUCT()
struct FSBAliasEventActorActive : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventActorActive();
};

