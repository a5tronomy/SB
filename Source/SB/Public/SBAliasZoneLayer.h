#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZoneLayer.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasZoneLayer : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZoneLayer();
};

