#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatCheckType.generated.h"

UENUM()
enum ESBActorStatCheckType {
    ActorStatCheckType_None,
    ActorStatCheckType_OverRate,
    ActorStatCheckType_UnderRate,
    ActorStatCheckType_Over,
    ActorStatCheckType_Under,
};

