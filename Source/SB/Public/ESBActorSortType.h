#pragma once
#include "CoreMinimal.h"
#include "ESBActorSortType.generated.h"

UENUM()
enum ESBActorSortType {
    ActorSortType_None,
    ActorSortType_Near,
    ActorSortType_Far,
    ActorSortType_LowHp,
    ActorSortType_HighHp,
    ActorSortType_Parry,
    ActorSortType_Block,
    ActorSortType_SmallAngle,
};

