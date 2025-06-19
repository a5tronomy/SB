#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventUIAction.generated.h"

USTRUCT()
struct FSBAliasEventUIAction : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventUIAction();
};

