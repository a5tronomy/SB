#pragma once
#include "CoreMinimal.h"
#include "ESBSignificanceUpdateTarget.generated.h"

UENUM()
enum class ESBSignificanceUpdateTarget {
    None,
    MovementComponent,
    SkeletalMeshComponent_Tick,
    SkeletalMeshComponent_Shadow,
    SkeletalMeshComponent_VisibilityBasedAnimTickOption,
    CollisionGroupComponent,
    AnimURO,
    Actor,
    LaserComponent,
    DestructibleComponent,
    CableComponent,
};

