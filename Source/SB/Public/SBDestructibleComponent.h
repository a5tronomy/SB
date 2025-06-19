#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBChunkParticleInfo.h"
#include "SBDestructibleComponent.generated.h"

class AActor;
class UFXSystemComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DissolveFadeBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DissolveFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DissolveFadeParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDestroyActorWhenAfterDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCollisionWhenAfterDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ChunkNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite)
    UParticleSystem* ChunkParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChunkParticleDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* HitParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSBChunkParticleInfo> HitParticleInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HitParticleSystemMaxSpawnCount;
    
private:
    UPROPERTY(Transient)
    bool bRegisterdTick;
    
    UPROPERTY(Transient)
    bool bTickDissolve;
    
    UPROPERTY(Transient)
    float DissolveCurrentTime;
    
    UPROPERTY(Transient)
    bool bSpawnFracture;
    
    UPROPERTY(Transient)
    float SpawnFractureTime;
    
    UPROPERTY(Instanced, Transient)
    TMap<int32, UParticleSystemComponent*> CreatedChunkParticleSystemMap;
    
    UPROPERTY(Instanced, Transient)
    TMap<int32, UNiagaraComponent*> CreatedChunkNiagaraSystemMap;
    
    UPROPERTY(Instanced, Transient)
    TArray<UFXSystemComponent*> CreatedHitParticleSystemArray;
    
    UPROPERTY(Transient)
    int32 HitParticleSystemSpawnCount;
    
    UPROPERTY(Transient)
    bool bCompletedDissolve;
    
    UPROPERTY(Transient)
    int32 RestoreChunkCurrentStep;
    
public:
    USBDestructibleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHitParticleSystem(TArray<FSBChunkParticleInfo> ChunkParticleInfos, int32 MaxSpawnCount);
    
    UFUNCTION(BlueprintCallable)
    void SetDissolveFade(float BeginTime, float Duration, FName ParameterName, bool DestroyActorWhenAfterDissolve, bool EnableCollisionWhenAfterDissolve);
    
    UFUNCTION(BlueprintCallable)
    void SetChunkNiagaraSystem(UNiagaraSystem* inNiagaraSystem, float DestroyTime);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION()
    void OnCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

