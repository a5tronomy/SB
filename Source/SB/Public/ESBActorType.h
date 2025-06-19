#pragma once
#include "CoreMinimal.h"
#include "ESBActorType.generated.h"

UENUM()
enum ESBActorType {
    ActorType_None,
    ActorType_PC,
    ActorType_NPC,
    ActorType_Monster,
    ActorType_BossMonster,
};

