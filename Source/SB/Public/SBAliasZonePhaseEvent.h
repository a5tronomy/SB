#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasZonePhaseEvent.generated.h"

USTRUCT()
struct FSBAliasZonePhaseEvent : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasZonePhaseEvent();
};

