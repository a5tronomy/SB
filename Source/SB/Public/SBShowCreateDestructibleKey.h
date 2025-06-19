#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESBShowActorTarget.h"
#include "SBShowCreateDestructibleCollisionResponseToChannel.h"
#include "SBShowKey.h"
#include "SBShowCreateDestructibleKey.generated.h"

class UDestructibleMesh;
class UParticleSystem;

UCLASS(EditInlineNew)
class SB_API USBShowCreateDestructibleKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    UDestructibleMesh* DestructibleMesh;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> LocationBaseTarget;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    float AllowFloorTraceDistance;
    
    UPROPERTY(EditAnywhere)
    float AllowFloorTraceStartZSubLength;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> AllowFloorSurface;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> AllowFloorObjectTypes;
    
    UPROPERTY(EditAnywhere)
    bool bUseHardSleeping;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionType;
    
    UPROPERTY(EditAnywhere)
    float DissolveFadeBeginTime;
    
    UPROPERTY(EditAnywhere)
    float DissolveFadeDuration;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyAfterDissolve;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ChunkAttachedParticle;
    
    UPROPERTY(EditAnywhere)
    float ChunkAttachedParticleDestroyTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ComponentTag;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowCreateDestructibleCollisionResponseToChannel> CollisionResponseToChannel;
    
    UPROPERTY(EditAnywhere)
    float BaseDamage;
    
    UPROPERTY(EditAnywhere)
    FVector HurtOriginOffset;
    
    UPROPERTY(EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    bool bFullDamage;
    
    UPROPERTY(EditAnywhere)
    bool bRegisterActor;
    
    UPROPERTY(EditAnywhere)
    FName RegisterKey;
    
    USBShowCreateDestructibleKey();

};

