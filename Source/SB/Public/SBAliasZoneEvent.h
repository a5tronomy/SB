#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZoneEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasZoneEvent : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZoneEvent();
};

