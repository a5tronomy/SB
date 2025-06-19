#pragma once
#include "CoreMinimal.h"
#include "ESBActorWeightType.generated.h"

UENUM()
enum ESBActorWeightType {
    ActorWeightType_None,
    ActorWeightType_Smallest,
    ActorWeightType_Small,
    ActorWeightType_Normal,
    ActorWeightType_Medium,
    ActorWeightType_Large,
    ActorWeightType_SuperLarge,
};

