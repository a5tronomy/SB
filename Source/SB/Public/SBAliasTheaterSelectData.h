#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasTheaterSelectData.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasTheaterSelectData : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasTheaterSelectData();
};

