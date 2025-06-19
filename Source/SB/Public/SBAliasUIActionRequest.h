#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasUIActionRequest.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasUIActionRequest : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasUIActionRequest();
};

