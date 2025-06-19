#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTriggerType.generated.h"

UENUM()
namespace ESBZoneEventActorTriggerType {
    enum Type {
        None,
        DestructionFromActorAttack,
        DestructionFromActorMove,
        DestructionFromActorRuleMove,
        DestructionFromActorRangedAttack,
    };
}

