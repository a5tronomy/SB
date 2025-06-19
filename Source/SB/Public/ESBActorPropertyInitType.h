#pragma once
#include "CoreMinimal.h"
#include "ESBActorPropertyInitType.generated.h"

UENUM()
enum ESBActorPropertyInitType {
    ActorPropertyInitType_None,
    ActorPropertyInitType_Dead,
    ActorPropertyInitType_Revival,
    ActorPropertyInitType_InteractionCamp,
    ActorPropertyInitType_RevivalWhenComa,
    ActorPropertyInitType_AfterWarp,
    ActorPropertyInitType_ReStart,
};

